TODO write me




## New Stuff

- Added [TFIT - The Ficsit Information Tool](https://ficsit.app/mod/TFIT) to the All Modules Modpack.
  - PowerSuit Modules will soon take advantage of this mod's features to offer tooltips for modules and suits that are easier to read and more informative.
  - By default, the mod hides the "Recipes" section of tooltips unless you are holding your Sprint key, making it easier to read longer item tooltips that could otherwise be pushed offscreen.
  - Don't like one of the mod's features? Two options
    - Disable it in the Mod Configs for TFIT - the mod is incredibly configurable!
    - Unsubscribe from the "All Modules Modpack" mod and instead subscribe to the individual mods you want to use.
- **AWESOME Sink points** for all crafting components, suits, and modules
  - TODO regenerate now with nuclear points
  - A new use for the modules and suits you don't need anymore
  - Wondering what these point values are? [TFIT - The Ficsit Information Tool](https://ficsit.app/mod/TFIT) will tell you!
  - Generated with the base-game standard of a recipe's output points being double that of the ingredients' points
  - Mod devs - I wrote a utility into TFIT that can generate sink points for your items for you. Check it out on the TFIT mod page.
- New Module - **Mining Overclocker Module**  (Fresh from R&D sub-mod)
  - Significantly increases manual mining speed (10 extra mining ticks per second)
  - Helps clear out the miner-blocking clusters on top of nodes much faster
  - Priced relatively inexpensively to make it more accessible early game
  - Thanks to AngryBeaver for the idea for this module
- New Item - **PowerSuit Liquid BioFuel Charge**
  - More energy dense than Solid Biofuel and Packaged Liquid Biofuel
  - Crafted in the Packager
  - The Bio Reactor and Fuel Reactor modules grant the suit the ability to use this fuel
  - Rationale:
    - The Liquid Biofuel recipe in base game is [barely an energy gain](https://satisfactory.fandom.com/wiki/Liquid_Biofuel#Tips) over solid biofuel
    - When you turn Solid Biofuel into Liquid Biofuel (which requires oil tier tech), the output product is also less energy dense per inventory stack than the input product. Taking advantage of your higher tech tier should not make the fuel option _worse_ than it was before.
    - Gives some more purpose to an rarely used base-game recipe
  - Thanks pantsmode for bringing this to my attention
- You can find a spreadsheet that compares PowerSuit fuels [here](https://docs.google.com/spreadsheets/d/1yn1Pswj76ZDBuDiWO8Alr5WgTfqHipKUIJsz8m7AbfI/edit?usp=sharing) - this is also linked from the mod page Fuels info section.
- Install/uninstall sounds for the Electric Chainsaw Module

## Changed Stuff

- TODO significantly modified the cost of Module Base Componenets and Suit Framework
  - TODO will need to recalc suit points after this
  - TODO basic suit componenets and advanced later?
  - Rationale
    - Now that the base game has locked Blade Runners behind Quartz, getting a PowerSuit required finding both Quartz (Blade Runners) and Caterium (Quickwire)
    - One of the goals of PowerSuit Modules is to add utilities to assist you during your exploration of the map
    - The Biofuel PowerSuit is supposed to be an early game option that allows you to use modules early, but having access to both Quartz and Caterium means you have done a pretty big chunk of exploration (assuming you don't already know their locations going in using an external map)
- Reduced High Speed Connector usage in most recipes
  - They are quite expensive and a bit overused in the recipes.
  - Strong Electromagnet: 10 -> 2
  - Alt: Strange Alien Module Base 20 -> 5
  - Alt: Somersloopian Module Base 10 -> 5
  - Battery Fuel Adapter 50 -> 10
  - Shield Hypercharger Reconfigurator 200 -> 100
  - TODO Node costs adjusted accordingly
- Stabilized Somerslink Catalyzation recipe returns 2 Stablilized Somersloops now instead of 1
- Rebalanced the recipes and crafting speeds of Fuel Charges
  - TODO Recipes have been modified so that one Electromagnetic Control Rod 'represents' about as much energy as it does in the base-game Uranium Fuel Rod recipe.
  - TODO Machine crafting speed has been reduced significantly so machines consumes a more reasonable items/minute
  - TODO Manual crafting speed is the same as it was before
  - Rationale
    - It was previously pretty unreasonable to supply a machine set to these recipes all the time
    - The previous recipe was intended to be like the Leaves to Solid Biofuel recipe - no way are you making that many leaves automatically per minute, it's okay for the machine to be off sometimes
    - That logic doesn't make as much sense for a recipe where all of the ingredients are fully automatable
  - Thanks AshleighTheCutie for bringing this up
- Fresh from R&D research tree rearranged slightly
- Modified the crafting component research tree to fit the new Fuel Charge. Packaged Coolant is no longer a prerequisite for Uranium Fuel Charges, the BioFuel Charge is instead.
- Removed the "Fuel Types" tooltip listing on the Biofuel Suit because it does not live update with the suit's actual allowed fuels (which depends on what modules you have installed). No functionality was removed, just the tooltip. This might return later.

## Bugfixes

- Fixed that the Overcharged Somerslink Regulator was not actually radioactive
- Fixed that the Fuel Runners did not stop applying their movement bonus when the suit is out of fuel.
  - Thanks Krzeszny for bringing this to my attention
- Fixed that the Hover Jetpack module did not actually grant the 10 meter building interaction range specified in its description
  - Thanks LK Aice!
- Fixed typo in Flight Drift Stopping Threshold config tooltip
  - Thanks DeAnna!

## Known Bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) and the top of the mod page for more info. Also check out the known bugs for PowerSuit as well.
