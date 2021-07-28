Lots of bugfixes, new suit fuel information display, AWESOME Uplink module, Mobile Workstation craft-on-the-go behavior, double-tap c to stop flying.




[![UpdateBanner](https://i.imgur.com/rU1PLZg.png)](https://ficsit.app/mod/BezrE8aswqXLRX)

Be sure to check out the [version 3.0.0 patch notes](https://github.com/budak7273/ArmorModules/blob/master/PatchNotes/Update_3.0.0.md) if you haven't yet!

Thanks for the support and bug reports everyone! This update should address most of the issues you were encountering and add some fun new toys.

## New Stuff

- **New suit fuel UI** shows how much of each fuel item you have left. Usage priority is left to right, last consumed item is boxed. The tiny orange progress bar shows how much of the last consumed item you have left before it consumes another.

![FuelUI](https://i.imgur.com/2fJG1dy.png)

- New **Mobile AWESOME Uplink module** in Fresh from R&D sub-mod
  - Mobile AWESOME Shop/Resource Sink (for ticket printing and points viewing)
- You can now collapse Mobile Workstation GUIs and **continue to craft items while still moving around in the world!** See their GUI for more info
- **Double-tap crouch to stop hover flight** keybind is back
- Remote Access module now has a config option to be turned on all the time
- Night Vision module now as a config option to be turned on all the time

## Changed Stuff

- Fixed behavior of **Horizontal and Vertical thruster modules**, which also included rebalancing their costs and awarded speeds.
- Mid-Air Refuel module now increases fuel consumption only while flying, and consumes flat 25 MW of Power while flying as opposed to the unimplemented power consumption multiplier
- Item Consumer modules now show how many of their consumed item (ex. Filters) remain in your inventory
- **Full support for Toggle Sprint base game setting**
- Factor in base game settings for volume as well as the mod slider values
- Fixed various tooltips across various sub-mods
- Update costs of Fresh from R&D modules, notably the Mobile Workshop modules
- Fuel Runners no longer makes noise when you start sprinting, because that was actually really annoying in retrospect
- Flight Modules crafting category has been split into Flight Modules and Flight Enhancing Modules to make it more clear that you can only wear one jetpack at a time
- There is now a config option that should keep modules from ever consuming fuel, if that's your cup of tea
- Night Vision module starts out installed at full power instead of 0 power
- Clarified display of Modules and Configs inventory tabs

## Bugfixes (including those to base PowerSuit)

- Fixed issue with needing to relog under some conditions for suit allowed fuels to recalculate
- Fixed various movement bugs, such as entering water screwing up your speed, and being unable to sprint diagonally
- Spatial Tear Generator now correctly shorts the suit and no longer requires re-equip to get modules to work again
- MAM node no longer requires gaseous nitrogen to research, you can use packaged nitrogen now instead. Forgot to set my tree node generator to convert fluids.
- Dependency mod _MAM Enhancer_ tooltip bug fixed, see its changelog for more info
- Fixed various multiplayer bugs
- Refresh suit stats detailed list widget without having to re-open window
- Fixed handheld hoverpack controllers lagging slightly behind actual hand positions
- Fixed that Mobile Workstation modules did not close when escape/tab is pressed
- Configurable Dampening module now 

## Known bugs (sorry)

- The suit fuel information display is only working on clients right now. Expect a version out soon that should fix this. 
- Hoverpack controllers will be floating separate from your hands if you use an FOV other than 90
- Modules that require fuel to operate still don't turn off when you lack fuel.
  - This is more complicated than it may seem, because a module can change whether it is usable or not very often due to fuel levels, which can cause a tolerable but measureable amount of lag.
- Slight flickers in the suit UI when changing suit movement states
- I might have accidentally broken some module sounds, let me know if something seems missing

Thanks for reading, and have fun!
