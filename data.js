const elements = ["hydrogen", "helium", "lithium", "berylium", "boron", "carbon", "nitrogen", "oxygen",
  "fluorine", "neon", "sodium", "magnesium", "aluminum", "silicon", "phosphorus", "sulfur", "chlorine", "argon",
  "potassium", "calcium", "scandium", "titanium", "vanadium", "chromium", "manganese", "iron", "cobalt", "nickel",
  "copper", "zinc", "gallium", "germanium", "arsenic", "selenium", "bromine", "krypton",
  "rubidium", "strontium", "yttrium", "zirconium", "niobium", "molybdenum", "technetium", "ruthenium", "rhodium",
  "palladium", "silver", "cadmium", "indium", "tin", "antimony", "tellurium", "iodine",
  "xenon", "cesium", "barium", "lanthanum", "cerium", "praseodymium", "neodymium", "promethium", "samarium", "europium", "gudolinium",
  "terbium", "dysprosium", "holmium", "erbium", "thulium", "ytterbium", "lutetium", "hafnium", "tantalum", "tungsten",
  "rhenium", "osmium", "iridium", "platinum", "gold", "mercury", "thallium", "lead", "bismuth", "polonium", "astatine",
  "radon", "francium", "radium", "actinium", "thorium", "protacitinium", "uranium", "neptunium", "plutonium",
  "americium", "curium", "berkelium", "californium", "einsteinium", "fermium", "mendelevium", "nobelium",
  "lawrencium", "rutherfordium", "dubnium", "seaborgium", "bohrium", "hassium", "meitnerium"];
const symbols = ["h", "he", "li", "be", "b", "c", "n", "o", "f", "ne", "na", "mg", "al", "si", "p", "s", "cl", "ar", "k",
  "ca", "sc", "ti", "v", "cr", "mn", "fe", "co", "ni", "cu", "zn", "ga", "ge", "as", "se", "br", "kr", "rb", "sr", "y", "zr",
  "nb", "mo", "tc", "ru", "rh", "pd", "ag", "cd", "in", "sn", "sb", "te", "i", "xe", "cs", "ba", "la", "ce", "pr", "nd", "pm",
  "sm", "eu", "gd", "tb", "dy", "ho", "er", "tm", "yb", "lu", "hf", "ta", "w", "re", "os", "lr", "pt", "au", "hg", "tl", "pb",
  "bi", "po", "at", "rn", "fr", "ra", "ac", "th", "pa", "u", "np", "pu", "am", "cm", "bk", "cf", "es", "fm", "md", "no", "lr",
  "rf", "db", "sg", "bh", "hs", "mt"];
const weights = [1.0079, 4.0026, 6.941, 9.0122, 10.811, 12.0107, 14.0067, 15.9994, 18.9984, 20.1797, 22.9815,
  24.305, 26.9815, 28.0855, 30.9738, 32.065, 35.453, 39.948, 39.0983, 40.078, 44.9559, 47.867, 50.9415, 51.9961, 54.938, 55.845, 58.9332,
  58.6934, 63.546, 65.39, 69.723, 72.64, 74.9216, 78.96, 79.904, 83.8, 85.4678, 87.62, 88.9059, 91.224, 92.9064,
  95.64, 98, 101.07, 102.9055, 106.42, 107.8682, 112.411, 114.818, 118.71, 121.76, 127.6, 126.9045, 131.293,
  132.9055, 137.327, 138.9055, 140.116, 140.9077, 144.24, 145, 150.36, 151.964, 157.25, 158.9253, 162.5, 164.9303, 167.259,
  168.9342, 173.04, 174.967, 178.49, 180.9479, 183.84, 186.207, 190.23, 192.217, 195.078, 196.9665, 200.59, 204.3833,
  207.2, 208.9804, 209, 210, 222, 223, 226, 227, 232.0381, 231.0359, 238.0289, 237, 244, 243, 247, 247, 251, 252, 257, 258,
  259, 262, 261, 262, 266, 264, 277, 268];
const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
  31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
  65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98,
  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109];
