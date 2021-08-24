Shiny new meshes, new sounds, crafting components can be made in machines, new advanced Somerslink crafting chain, new dual mode flight module, more polish, and more!




[![UpdateBanner](https://i.imgur.com/rU1PLZg.png)](https://ficsit.app/mod/BezrE8aswqXLRX)
Be sure to check out the [version 3.0.0 patch notes](https://github.com/budak7273/ArmorModules/blob/master/PatchNotes/Update_3.0.0.md) if you haven't yet!

## New Stuff

[![NewItems](https://i.imgur.com/MU02XOh.png)](https://i.imgur.com/JIejQiM.jpeg)
[(Click to see full size image)](https://i.imgur.com/JIejQiM.jpeg)

<video controls="" width="720" height="405">
  <source src="https://i.imgur.com/Bi4Ejot.mp4" autoplay="false" controls="true" type="video/mp4">
</video>

- **Stunning new Visuals!**
  - All crafting components now have really cool meshes, because they have a reason to be on conveyors now!
  - Suits now have dropped item meshes as well:
    - ![SuitsDropped](https://i.imgur.com/zcjZt6A.png)
  - You might notice some snazzy new decorations at your local HUB and Fabrication Station.
    - More decorations will appear as you unlock more crafting components in the MAM.
  - Note that due to the Experimental Conveyor Rendering system, items look slightly different on belts compared to dropped items. This will be fixed in Update 5 when the conveyor rendering system is revamped.
- **Ear-tingling new Sounds!**
  - New team member Michael has contributed a lot of cool module sounds, with more on their way Soon™
  - **Expect them to change,** and for more of them to be added in the future.
    - We are still figuring out how we want to theme the sounds.
  - Check out his portfolio [here](Michael-Teelen.com)!
  - The Integrated Gas Mask now has sounds for entering/leaving gas, as well as a breathing loop like the vanilla gas mask.
  - Changed and added Indicator Sounds for Shield Status and Shield Hits (Work in Progress)
  - The following modules now have install/uninstall sounds:

<details>
<summary> Modules with New Install/Uninstall Sounds </summary>

Note that some of these names might be taken before the rename

  Flight Modules:

- Thrust Boots Module
- Hover Jetpack Module
- Integrated Jetpack Module
- Integrated Hover Pack
- Adaptive Flight Module
- Mid-Air Refueling Module
- Horizontal Thruster Module
- Vertical Thruster Module
- Air Resistance Regulator Module

Defense Modules:

- Integrated Hazmat Suit
- Integrated Gas Mask
- Fall Dampener Module
- Crude Radiation Plating
- Blast Plating
- Ballistic-Resistance Plating
- Slow Health Regenerator
- Medium Health Regenerator
- Fast Health Regenerator
- Shield Generator Mk1
- Shield Generator Mk2
- Tank Shield Reconfigurator
- Shield Hypercharger Reconfigurator

Mobility Modules:

- Exoskeleton Mk1
- Fuel Sprint Mk1
- Ground Sprint Mk1
- Ground Walk Mk1
- Hypertube Accel Mk1
- Integrated Blade Runners
- Ladder Climb Mk1
- Slide Angle Mk1
- Zipline Accel Mk1

Power Generation Modules:

- Bio Generator
- Dirty Reactor
- Fuel Burning Mk1 - Mk4
- Fusion Generator
- Hypertube Charging Coils
- Slug Generator
- Solar Mk1
- Somersloop Feedback
- Uranium RTG
- Zipline Power Tap

Probably more I forgot to list.

</details>

- **Crafting Components can be Produced in Machines!**
  - Recipes of some crafting componets have been tweaked to allow them to be produced in machines relevant to their tier. Automate to your heart's content!

<video controls="" width="720" height="405">
  <source src="https://i.imgur.com/OaRhZLr.mp4" autoplay="" controls="" type="video/mp4">
</video>
<!-- https://streamable.com/prb8s2 -->

- **Redesigned Suit Fuel UI**
  - The suit Fuel UI has been revamped to be *at least* 20% cooler
  - The last used fuel item now appears in focus on the left side
  - Get an estimate on how long your current Fuel supply will last you (based on current usage) on the right
  - Find out how quickly your Suit is transferring fuel
  - If you have more valid Fuel items than the widget can display, you can open your player inventory and use your mouse wheel to scroll the list.
- **New Somerslink Crafting Chain**
  - A new production chain has arrived to test your factory skills, granting access to powerful new components, and the ability to produce extra Somerslink Regulators without consuming further Somersloops from your world.
  - An earlier-game recipe for recharging your Somerslink Regulators now exists as well
  - Design a production chain around recipes involving catalysts and byproducts to be rewarded with rare crafting components.
  - Hold your Sprint key when hoving over a Somersloop related component in your inventory for a production diagram.

<details>
<summary> Crafting Loop Diagram </summary>

![Loop](https://i.imgur.com/Th2jAHy.jpeg)

</details>

- **New Suit Fuel Options**
  - New **Plutonium Fuel Charge** and *Hidden Surprise Item?*
  - With these Fuel Charges, you will be hard pressed to ever run out of Suit Fuel.
  - They can also be used in vehicles that burn fuel.
- **Slug Amplification Generator overhaul**
  - The module existed before, but it has changed so much, that I'm putting it here instead
  - The module now generates no power on its own, but generates increasingly more power depending on how many Power Slug related items you have in your player inventory. The rarer the item, the more Power it contributes.
  - Check the module's inventory widget for info on what items count toward this total.
- **Adaptive Flight Module**
  - New fully electric Jetpack/Hoverpack combo module
  - Swap between flight modes with your PowerSuit: Toggle Gravity Flight keybind
  - Consumes more Power than the regular Jetpack and Hoverpack, but also moves slightly faster than them on its own.

## Changed Stuff

- New internal implementaton for the **Vertical Thrusters Module**. and **Horizontal Thrusters Module**
  - Reduces the unintentionally high speed bonus that these modules gave you when traveling on a diagonal.
  - This should also avoid any potential stuttering in multiplayer.
- All Modules now have a slightly blue background color when in inventories to help with spotting them amidst other items and equipment. This can be turned off in the config.
- Changed up the energy value and crafting recipe numbers of the Uranium Fuel Cell
  - PowerSuit Nuclear Fuel Cells have 4x the energy density, but you get 1/4 as many as you used to per craft. Now they are more energy dense to carry than Batteries (as intended)
- Renamed all Power Generation modules to be more consistent with each other, and hopefully easier to identify. Now all passive power producers now have 'Generator' in the name, and all resource-burning producers have 'Reactor' in the name.
- **Dirty Reactor Module** (now *Radiation Absorbing Generator*)
  - Generates bonus Power that scales the more Radiation you are exposed to
  - Now grants +100% filter duration per installed module when when used together with the Integrated Hazmat Suit
- **Remote Access Module**
  - Fancy new UI that tells you what you're interacting with
  - Now consumes a small amount of power depending on the target distance
  - Now plays a sound when it assists you in interacting with something
  - Now only allows interaction with buildings by default. Being able to pick up Slugs and hard drives from really far away broke quite a few exploration challenges. If you want this back, you can re-enable it in the Fresh from R&D Mod Config.
- **Spatial Tear Generator**
  - Ability to enable/disable the emergency teleport functionality
  - New inventory widget with indicator lights helping you debug why teleport may be disabled (ex. are you missing items?)
- **Mobile Workstation Modules**
  - New progress bar that shows your background crafting progress when the widget is collapsed
  - Hot Tips now only shown when hovering over the button
- **Cooling Systems**
  - There have been reports of these not working as intended, but a change in base suit behavior (see Bugfixes section) should have fixed that.
  - More than one of the same tier can no longer be equipped at once
    - There was already a hidden minimum suit reboot time, so this should not have had much of an effect.
  - Now reduces Overdraw time as well
    - It should not be viable to use the suit on Overdraw alone, and these modules made it possible to do so.
  - Removed inaccurate description text about power usage while shields recharged
- Fixed the **Zapline Acceleration Coils** module being a whole ingredient tier more expensive than it should have been. Whoops...
- Rename 'Configurable Dampening module' to 'Air Resistance Regulator module'
- Color tweaked icon of the Belt Immunity module to make it more visually distinct from the Thrust Boots
- Moved around the nodes in some trees. Unlock order should still be the same though
- Tweaked a few module recipes
- Renamed 'X Fuel Cell' items added by the mod to 'X Fuel Charge' to avoid confusion with base game items

## Bugfixes

- (Base PowerSuit mod) Suit now reboots instantly when joining the game and exiting vehicles.
  - This prevents you from dying from radiation after exiting a train, for example. In the past, it was possible to die as the suit was rebooting, since entering a vehicle destroys your pawn -> suit would reboot on exit since it was a fresh equip
- Fixed that the Re-Synchronize Somerslink recipe was not actually working in the Particle Accelerator by changing the recipe
- Fuel Widget should no longer have any issues spawing for host/client
- Remote Access module should no longer get stuck on after you interact with a Fluid Buffer
- Fixed that Health Regenerator modules were not consuming power when over a certain health amount. I had a partially implemented feature that was interfering with this.
- Fixed the ADA message for the first milestone so that it does not spam you with the tutorial all at once
- Fixed Enable/disable sounds config being ignored
- Fixed enable/disable global fuel consumption config being ignored

## Misc Stuff

- I have switched around how I structure my project files some, so for the time being, the Github mod repos have not yet been updated with the latest source files. This will be back in the future. If you want source code access in the mean time, contact me on Discord.
- **Double-tap crouch to stop hover flight** was added in 3.1.0, but it's now handled by PowerSuit instead of my own code.
- Module install/uninstall sound handling moved to base PowerSuit mod instead of my own code.
- Improved numerous suit item tooltips
- 2 new easter eggs!?! Perhaps more insight could be found in the mod config files... I give `0` more hints.
- Debug fuel module accessible with cheats.

## Changes and Fixes in Base PowerSuit Mod

(See the PowerSuit changelog on its mod page)

## Known bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) or the top of the mod page for more info.

Thanks for reading, and have fun!
