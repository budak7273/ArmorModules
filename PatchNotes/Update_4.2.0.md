Update 8 support, easy suit fuel preference selection, 2 new modules, AWESOME Sink points for all parts and modules, Fuel Charge rebalance.




## New Stuff

- **Easily select your preferred suit fuel** via the same widget as the base-game Jetpack
  - It was already possible to order your fuel preferences via the order in which you installed modules that granted the ability to use fuel items, but it was pretty obscure.
  - Now it's as easy as clicking the gear and selecting your fuel of choice from the list
  - ![Fuel selection widget](https://cdn.discordapp.com/attachments/623891487683510323/1142342489668341810/image.png)
- **AWESOME Sink points** for all crafting components, suits, and modules
  - A new purpose for the modules and suits you don't need anymore
  - Wondering what these point values are? [TFIT - The Ficsit Information Tool](https://ficsit.app/mod/TFIT) will tell you!
  - Generated with the base-game standard of a recipe's output points being double that of the ingredients' points
  - Gives producing suit components a new purpose - points farming. Some of them are quite high-valued.
  - Mod developers - I wrote a utility into TFIT that can generate sink points for your items for you. Check it out on the TFIT mod page.
- All **Mobile Workstation modules can now be opened via keybinds** that you set in addition to the buttons that appear in the Overview section
- New Module - **Mining Overclocker Module**  (Fresh from R&D sub-mod)
  - Significantly increases manual mining speed (10 extra mining ticks per second)
  - Helps clear out the miner-blocking clusters on top of nodes much faster
  - Priced relatively inexpensively to make it more accessible early game
  - Thanks to AngryBeaver for the idea for this module
- New Module - **WIP Hypertube Ejector Module** (Mobility sub-mod)
  - There was previously a bug that allowed you to use the PowerSuit Instant Start Flight keybind (Ctrl+Space, must be enabled in the PowerSuit mod configs) to eject out of Hypertubes at any point in travel. Now that bug is a feature, but you need this module installed to do that.
  - Requires a flight module installed to function correctly.
- New Item - **PowerSuit Liquid BioFuel Charge**
  - More energy dense than Solid Biofuel and Packaged Liquid Biofuel
  - Recipe creates some energy
  - Crafted in the Packager
  - The Bio Reactor and Fuel Reactor modules grant the suit the ability to use this fuel
  - Rationale:
    - The Liquid Biofuel recipe in base game is [barely an energy gain](https://satisfactory.wiki.gg/wiki/Liquid_Biofuel#Tips) over solid biofuel
    - When you turn Solid Biofuel into Liquid Biofuel (which requires oil tier tech), the output product is also less energy dense per inventory stack than the input product. Taking advantage of your higher tech tier should not make the fuel option _worse_ than it was before.
    - Gives some more purpose to an rarely used base-game recipe
  - Thanks pantsmode for bringing this to my attention
- You can find a spreadsheet that compares PowerSuit fuels [here](https://docs.google.com/spreadsheets/d/1yn1Pswj76ZDBuDiWO8Alr5WgTfqHipKUIJsz8m7AbfI/edit?usp=sharing) - this is also linked from the mod page Fuels info section.
- Install/uninstall sounds for the Electric Chainsaw Module

## Changed Stuff

- Suit Framework no longer requires Blade Runners
  - One of the goals of PowerSuit Modules is to add utilities that assist you during your exploration of the map
  - Now that the base game has locked Blade Runners behind Quartz instead of Caterium, without this change, getting a PowerSuit would have required finding both Quartz (Blade Runners) and Caterium (Quickwire)
  - The Biofuel PowerSuit is supposed to be an early game option that allows you to use modules early, but having access to both Quartz and Caterium means you have done a pretty decent chunk of exploration already (assuming you don't already know their locations going in using an external map)
  - Now requires 3 Rotors instead of Blade Runners and 5 more Modular Frames (in addition to the existing Quickwire requirement)
- PowerSuit Fabrication Milestone cost adjusted for the same reasons as above
- Adjusted cost of Module Base Componenets recipes
  - The base game added multiple equipment slots at no "cost" to the user, so suit equipment slots should no longer be such an expensive commodity
  - Primitive Recipe now only needs 1 power shard instead of 2
  - Standard recipe now produces 2 Module Base Components instead of 1
  - New alt recipe that uses Alien DNA Capsules
    - Encourages fighting enemies, another opportunity to benefit from the tools PowerSuit offers
    - Another clearly renewable module base recipe
    - Idea from AngryBeaver
- Reduced High Speed Connector usage in most recipes
  - They are quite expensive and were a bit overused in the recipes.
  - Strong Electromagnet: 10 -> 2
  - Alt: Strange Alien Module Base 20 -> 5
  - Alt: Somersloopian Module Base 10 -> 5
  - Battery Fuel Adapter 50 -> 10
  - Shield Hypercharger Reconfigurator 200 -> 100
- Alt: Stabilized Somerslink Catalyzation recipe returns 2 Stablilized Somersloops now instead of 1
- Rebalanced the recipes and crafting speeds of the old Fuel Charges (Uranium, Plutonium, Somerslinked)
  - Recipes have been modified so that one Electromagnetic Control Rod 'represents' closer to as much energy as it does in the base-game Uranium Fuel Rod recipe.
  - Each Fuel Cell recipe now creates some energy in the process compared to the input ingredients (energy cost of running the machines was not considered)
  - Machine crafting speed has been reduced significantly so machines consumes a more reasonable items/minute
  - Manual crafting speed has been increased significantly, even compared to before the update, so that crafting the items by hand is viable
  - Rationale
    - It was previously pretty unreasonable to supply a machine set to these recipes all the time
    - The previous recipe was intended to be like the Leaves to Solid Biofuel recipe - no way are you making that many leaves automatically per minute, it's okay for the machine to be off sometimes
    - That logic doesn't make as much sense for a recipe where all of the ingredients are fully automatable
    - You can see my math behind this [here](https://docs.google.com/spreadsheets/d/1yn1Pswj76ZDBuDiWO8Alr5WgTfqHipKUIJsz8m7AbfI/edit?usp=sharing).
  - Thanks AshleighTheCutie for bringing this up
- Fresh from R&D research tree rearranged slightly
- Made the Zapline Acceleration Coils research no longer depend on Integrated Blade Runners
- Modified the crafting component research tree to fit the new Fuel Charge. Packaged Coolant is no longer a prerequisite for Uranium Fuel Charges, the BioFuel Charge is instead.
- Removed the "Fuel Types" tooltip listing on the Biofuel Suit because it does not live update with the suit's actual allowed fuels (which depends on what modules you have installed). No functionality was removed, just the tooltip. This might return later.
- Changed the default `Flight Drift Stopping Threshold` mod config option value to `5.0`. You may need to adjust this if you're having trouble descending in hover flight.
- Debug Module can use be used to grant/revoke Advanced Suit Flags now
- Increased the boost speed of the Thrust Boots Module
  - It was a little too weak, especially compared to the base-game Parachute now.
  - Sprint Multiplier 1.5 -> 2.5
  - Sprinting fuel cost multiplier 1.25 -> 1.5
  - 7m building interaction range bonus
  - By increasing the boost speed and not its base speed it retains its usefulness as a "manual hover flight" tool, except now boosting allows it to be used for vertical ascent.
- **Mobile Crafting Modules** have had their functionality changed due to Update 8
  - They now connect to existing buildables in the world, so if a corresponding one is missing, it won't open and will print a message in the chat.
  - The "mobile crafting as you walk around" functionality is no longer available until I can find a fix for it
    - Update 8 made it so that I couldn't get the "hold spacebar to craft" functionality working for the custom widget, which was the backbone of the mobile crafting feature
- **Storage Compartment Module** eject button now produces a sound on use

## Bugfixes

- Fixed that the Overcharged Somerslink Regulator was not actually radioactive
- Fixed that the config option for controlling if the Spatial Tear Generator module requires items didn't actually do anything
  - Thanks anonymous1253. for bringing this up
- Fixed that the Fuel Runners did not stop applying their movement bonus when the suit is out of fuel.
  - Thanks Krzeszny for bringing this to my attention
- Fixed that the Hover Jetpack module did not actually grant the 10 meter building interaction range specified in its description
  - Thanks LK Aice!
- Fixed typo in Flight Drift Stopping Threshold config tooltip
  - Thanks DeAnna!
- Fixed that the debug module accidentally granted Turbofuel, Packaged Fuel, and Packaged Liquid Biofuel as suit fuels out of the box

## Known Bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) and the top of the mod page for more info. Also check out the known bugs for PowerSuit as well.

- Integrated Jetpack Module is not as nimble when air strafing as the base game's jetpack
- Rebinding keys may sometimes require you to re-equip your suit for the changes to take effect
- ADA voice messages added by the mod do not play
- It is sometimes still possible to escape hypertubes with flight even without the relevant module installed

<!-- 
Maybe later

- Move Suit Mk1 earlier in progression
- Consider moving balance settings to session settings
- MoveC mJumpOffLadderVelocity module?
- moveC mEnableVaultPrototype module?
- Upon max shield recalc, cap current shield to new max
- Draw atop actual health bar with shield blocks, Tinkers' Construct style
  - Might be confusing for stuff that goes through shield
- Boombox back module - make a boombox dropped in the world travel with you
  - Keybind to trigger the thump?
- Make separate Basic and Advanced suit components later? or is this just parts bloat

- TODO Added [TFIT - The Ficsit Information Tool](https://ficsit.app/mod/TFIT) to the All Modules Modpack.
  - PowerSuit Modules will soon take advantage of this mod's features to offer tooltips for modules and suits that are easier to read and more informative.
  - By default, the mod hides the "Recipes" section of tooltips unless you are holding your Sprint key, making it easier to read longer item tooltips that could otherwise be pushed offscreen.
  - Don't like one of the mod's features? Two options:
    - Disable it in the Mod Configs for TFIT - the mod is incredibly configurable!
    - Unsubscribe from the "All Modules Modpack" mod and instead subscribe to the individual mods you want to use. -->
