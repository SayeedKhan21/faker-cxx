#include "FoodData.h"

#include <array>
#include <string_view>

namespace faker
{
const std::array<std::string_view, 47> alcoholicBeverages{
    "Beer",
    "Wine",
    "Vodka",
    "Rum",
    "Gin",
    "Whiskey",
    "Tequila",
    "Brandy",
    "Champagne",
    "Cider",
    "Sake",
    "Absinthe",
    "Cognac",
    "Schnapps",
    "Mead",
    "Bourbon",
    "Scotch",
    "Irish Cream",
    "Jägermeister",
    "Pisco",
    "Port Wine",
    "Sherry",
    "Grappa",
    "Sambuca",
    "Midori",
    "Kahlúa",
    "Baileys Irish Cream",
    "Pina Colada",
    "Margarita",
    "Cosmopolitan",
    "Mai Tai",
    "Negroni",
    "Martini",
    "Old Fashioned",
    "Mojito",
    "Caipirinha",
    "Piña Colada",
    "Bloody Mary",
    "Tom Collins",
    "Singapore Sling",
    "Manhattan",
    "Moscow Mule",
    "Paloma",
    "Bellini",
    "Mimosa",
    "White Russian",
    "Black Russian",
};

const std::array<std::string_view, 85> dishNames = {
    "Sushi",
    "Paella",
    "Biryani",
    "Poutine",
    "Kebab",
    "Kimchi",
    "Rendang",
    "Pad Krapow Moo Saap",
    "Goulash",
    "Pho",
    "Tacos",
    "Pierogi",
    "Tagine",
    "Moussaka",
    "Feijoada",
    "Dim Sum",
    "Ceviche",
    "Jollof Rice",
    "Pierogi",
    "Borscht",
    "Pavlova",
    "Katsudon",
    "Chimichurri",
    "Laksa",
    "Tandoori Chicken",
    "Haggis",
    "Baklava",
    "Caponata",
    "Tom Kha Gai",
    "Ramen",
    "Arroz con Pollo",
    "Baklava",
    "Dolma",
    "Samosa",
    "Bánh Mì",
    "Lobster Thermidor",
    "Perogies",
    "Arepas",
    "Nasi Goreng",
    "Pav Bhaji",
    "Causa Rellena",
    "Baba Ganoush",
    "Chicken Piccata",
    "Penne alla Vodka",
    "Beef and Broccoli",
    "Shrimp Fried Rice",
    "Butter Chicken",
    "Egg Fried Rice",
    "Stuffed Bell Peppers",
    "Chicken Tikka Masala",
    "Lemon Herb Roast Chicken",
    "Shrimp Scampi Pasta",
    "Beef Bulgogi",
    "Tom Yum Soup",
    "Chicken Katsu",
    "Vegetable Curry",
    "Chicken Quesadilla",
    "Pho",
    "Honey Garlic Glazed Salmon",
    "Eggplant Rollatini",
    "Lemon Butter Shrimp",
    "Chicken Teriyaki",
    "Mango Salsa Chicken",
    "Cauliflower Fried Rice",
    "Chicken Fajitas",
    "Sausage and Mushroom Risotto",
    "Tomato Basil Mozzarella Skewers",
    "Garlic Parmesan Roasted Brussels Sprouts",
    "Beef Chimichanga",
    "Pulled Pork Sandwich",
    "Tandoori Chicken",
    "Mongolian Beef",
    "Vegetarian Paella",
    "Chicken Enchiladas",
    "Lemon Herb Grilled Fish",
    "Spinach and Feta Stuffed Chicken Breast",
    "Cajun Shrimp Pasta",
    "Teriyaki Salmon",
    "Baked Ziti",
    "Chicken Alfredo Pizza",
    "Caprese Stuffed Avocado",
    "Lobster Roll",
    "Chicken Caesar Salad",
    "Beef and Mushroom Pie",
    "Garlic Herb Roasted Potatoes",
};

const std::array<std::string_view, 11> foodCategories = {
    "Vegetables", "Fruits",   "Meat",   "Seafood",    "Dairy",        "Grains",
    "Beverages",  "Desserts", "Snacks", "Condiments", "Frozen Foods",
};

const std::array<std::string_view, 41> fruits = {
    "Apple",   "Banana",       "Orange",    "Strawberry", "Pineapple",  "Mango",         "Grapes",
    "Kiwi",    "Peach",        "Pear",      "Cherry",     "Blueberry",  "Raspberry",     "Blackberry",
    "Avocado", "Lemon",        "Lime",      "Grapefruit", "Cantaloupe", "Honeydew",      "Pomegranate",
    "Apricot", "Plum",         "Nectarine", "Fig",        "Papaya",     "Passion Fruit", "Guava",
    "Coconut", "Dragon Fruit", "Persimmon", "Cranberry",  "Date",       "Lychee",        "Mulberry",
    "Kumquat", "Jackfruit",    "Starfruit", "Rambutan",   "Gooseberry", "Elderberry",
};

const std::array<std::string_view, 28> grains = {
    "Wheat",  "Rice",      "Barley",  "Oats",     "Quinoa",      "Corn",      "Rye",
    "Millet", "Buckwheat", "Sorghum", "Amaranth", "Triticale",   "Spelt",     "Farro",
    "Kamut",  "Emmer",     "Freekeh", "Teff",     "Job's Tears", "Einkorn",   "Bulgur",
    "Maize",  "Semolina",  "Soy",     "Lentils",  "Chia Seeds",  "Flaxseeds", "Sunflower Seeds",
};

const std::array<std::string_view, 21> meats = {
    "Chicken", "Beef", "Pork",    "Lamb",  "Turkey", "Fish",    "Venison", "Duck", "Quail",   "Goose", "Salmon",
    "Shrimp",  "Crab", "Lobster", "Bison", "Veal",   "Haddock", "Trout",   "Tuna", "Sausage", "Ham",
};

const std::array<std::string_view, 32> milkProducts = {
    "Milk",          "Cheese",      "Yogurt",         "Butter",          "Cream",        "Sour Cream", "Cottage Cheese",
    "Whipped Cream", "Ice Cream",   "Condensed Milk", "Evaporated Milk", "Mozzarella",   "Feta",       "Parmesan",
    "Provolone",     "Cheddar",     "Gouda",          "Blue Cheese",     "Swiss Cheese", "Brie",       "Camembert",
    "Ricotta",       "Goat Cheese", "Mascarpone",     "Quark",           "Havarti",      "Colby",      "Monterey Jack",
    "Gruyère",       "Havarti",     "Cream Cheese",   "Neufchâtel",
};

const std::array<std::string_view, 31> nonalcoholicBeverages = {
    "Water",
    "Tea",
    "Coffee",
    "Milk",
    "Orange Juice",
    "Apple Juice",
    "Lemonade",
    "Iced Tea",
    "Cranberry Juice",
    "Grape Juice",
    "Pineapple Juice",
    "Coconut Water",
    "Tomato Juice",
    "Ginger Ale",
    "Hot Chocolate",
    "Limeade",
    "Grapefruit Juice",
    "Club Soda",
    "Root Beer",
    "Fruit Punch",
    "Pomegranate Juice",
    "Chai Tea",
    "Almond Milk",
    "Soy Milk",
    "Raspberry Lemonade",
    "Peach Iced Tea",
    "Hibiscus Tea",
    "Green Smoothie",
    "Vegetable Juice",
    "Pear Nectar",
    "Mango Lassi",
};

const std::array<std::string_view, 11> nuts = {
    "Almond",    "Walnut",     "Pecan",    "Cashew",   "Pistachio", "Hazelnut",
    "Macadamia", "Brazil Nut", "Pine Nut", "Chestnut", "Peanut",
};

const std::array<std::string_view, 20> oils = {
    "Olive Oil",     "Coconut Oil", "Vegetable Oil", "Canola Oil",    "Sesame Oil", "Sunflower Oil",    "Peanut Oil",
    "Grapeseed Oil", "Avocado Oil", "Corn Oil",      "Flaxseed Oil",  "Walnut Oil", "Safflower Oil",    "Hazelnut Oil",
    "Almond Oil",    "Palm Oil",    "Mustard Oil",   "Chia Seed Oil", "Hemp Oil",   "Pumpkin Seed Oil",
};

const std::array<std::string_view, 28> seafoods = {
    "Salmon", "Shrimp",  "Tuna",      "Cod",     "Lobster",   "Crab",    "Scallops", "Mussels",   "Oysters", "Sardines",
    "Trout",  "Haddock", "Swordfish", "Halibut", "Mahi-Mahi", "Clams",   "Catfish",  "Anchovies", "Sole",    "Octopus",
    "Squid",  "Caviar",  "Sea Bass",  "Herring", "Pollock",   "Snapper", "Surimi",   "Whitefish",
};

const std::array<std::string_view, 29> seeds = {
    "Chia Seeds",     "Flaxseeds",         "Sunflower Seeds",  "Pumpkin Seeds",     "Sesame Seeds",
    "Poppy Seeds",    "Hemp Seeds",        "Quinoa",           "Pomegranate Seeds", "Pine Nuts",
    "Hemp Hearts",    "Sacha Inchi Seeds", "Watermelon Seeds", "Sunflower Kernels", "Safflower Seeds",
    "Alfalfa Seeds",  "Mustard Seeds",     "Coriander Seeds",  "Cumin Seeds",       "Fennel Seeds",
    "Cardamom Seeds", "Caraway Seeds",     "Ajwain Seeds",     "Nigella Seeds",     "Fenugreek Seeds",
    "Anise Seeds",    "Celery Seeds",      "Dill Seeds",       "Cotton Seeds",
};

const std::array<std::string_view, 24> sugarProducts = {
    "Granulated Sugar",
    "Brown Sugar",
    "Powdered Sugar",
    "Demerara Sugar",
    "Turbinado Sugar",
    "Coconut Sugar",
    "Maple Syrup",
    "Agave Nectar",
    "Molasses",
    "Date Syrup",
    "Golden Syrup",
    "Corn Syrup",
    "Barley Malt Syrup",
    "Rice Syrup",
    "Blackstrap Molasses",
    "Palm Sugar",
    "Muscovado Sugar",
    "Lollipop",
    "Candies",
    "Chocolates",
    "Cookies",
    "Cakes",
    "Soda",
    "Ice Cream",
};

const std::array<std::string_view, 30> vegetables = {
    "Carrot",    "Broccoli",     "Spinach",     "Tomato",      "Bell Pepper", "Cucumber",
    "Lettuce",   "Kale",         "Cabbage",     "Zucchini",    "Eggplant",    "Radish",
    "Celery",    "Asparagus",    "Cauliflower", "Green Beans", "Peas",        "Brussels Sprouts",
    "Artichoke", "Sweet Potato", "Potato",      "Onion",       "Garlic",      "Ginger",
    "Mushroom",  "Leek",         "Scallion",    "Beets",       "Turnip",      "Rutabaga",
};
}
