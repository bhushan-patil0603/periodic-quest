// Common result array
let resultArray = [];

// Utility: render cards based on resultArray
function renderResults(containerId) {
  const container = document.getElementById(containerId);
  container.innerHTML = "";
  if (resultArray.length === 0) {
    container.innerHTML = "<p>No results found.</p>";
    return;
  }

  resultArray.map(item => {
    const card = document.createElement("div");
    card.className = "card";
    card.innerHTML = `
      <h3>${item.symbol.toUpperCase()}</h3>
      <p>${item.name}</p>
      <p>Atomic No: ${item.number}</p>
      <p>Weight: ${item.weight}</p>
    `;
    container.appendChild(card);
  });
}

// Show All Elements
function showAllElements() {
  resultArray = elements.map((name, i) => ({
    name,
    symbol: symbols[i],
    weight: weights[i],
    number: numbers[i]
  }));
  renderResults("elementsGrid");
}

// Toggle sections
function toggleSearch() {
  document.getElementById("hiddenSection").classList.add("hidden");
  document.getElementById("searchSection").classList.toggle("hidden");
  document.getElementById("elementsGrid").innerHTML = "";
}

function toggleHidden() {
  document.getElementById("searchSection").classList.add("hidden");
  document.getElementById("hiddenSection").classList.toggle("hidden");
  document.getElementById("elementsGrid").innerHTML = "";
}

// Perform Search
function performSearch() {
  const input = document.getElementById("searchInput").value.toLowerCase();
  let index = symbols.indexOf(input);
  if (index === -1) index = elements.indexOf(input);

  if (index !== -1) {
    resultArray = [{
      name: elements[index],
      symbol: symbols[index],
      weight: weights[index],
      number: numbers[index]
    }];
    saveHistory(elements[index]);
  } else {
    resultArray = [];
  }

  renderResults("elementsGrid");
}

// Find Elements in Name
function findElementsInName() {
  const name = document.getElementById("nameInput").value.toLowerCase();
  const found = new Set();

  for (let i = 0; i < name.length; i++) {
    const one = name[i];
    const two = name.slice(i, i + 2);

    if (symbols.includes(two)) {
      found.add(symbols.indexOf(two));
    } else if (symbols.includes(one)) {
      found.add(symbols.indexOf(one));
    }
  }

  resultArray = [...found].map(i => ({
    name: elements[i],
    symbol: symbols[i],
    weight: weights[i],
    number: numbers[i]
  }));

  renderResults("elementsGrid");
}

// Save to history
function saveHistory(entry) {
  const history = JSON.parse(localStorage.getItem("history") || "[]");
  history.push(entry);
  localStorage.setItem("history", JSON.stringify(history));
}

// Show Search History
function showHistory() {
  const history = JSON.parse(localStorage.getItem("history") || "[]");
  const display = history.map((e, i) => `${i + 1}. ${e}`).join("<br>");
  document.getElementById("history").innerHTML = `<h3>Search History</h3>${display}`;
}
