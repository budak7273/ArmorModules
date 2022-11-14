Update 6 Support. Big changelog! Plentiful bugfixes, better Mobile Workstation autocrafting.




## Status of the Mod

At long last, one of the primary reasons that the PowerSuit mod was created, the need for multiple equipment slots, is a base game feature now! This has a few implications:

- **You can use PowerSuits and other equipment at the same time!** I have kept in the modules for Gas Masks, Blade Runners, and Hazmat Suits, even though they are arguably obsolete, in case other mods add equipment items that occupy those slots (for example, Advanced HUD). You can stack the effects of the normal and Suit blade runners, for example.
- **PowerSuits are Back Slot equipment items.** This means that you can't use a Jetpack or Hover Pack at the same time as the suit, which is intentional. Perhaps in the future, modular legs, head, and chest items can be created (maybe even hand equipment), but the current implementation of PowerSuit is very closely tied to the base game's Hover Pack, so it's staying a back slot item only for now.
- I can start releasing mod source code again, since I used the time in this update to move basically every asset around inside of all Powersuit mods. Now all of the copyrighted models and are cordoned off in a git-ignored folder in each mod.

Although this mod may have started as "more equipment slots," it has grown to be much more - look at the Fresh from R&D modules, for example. I appreciate those of you continuing to use this mod despite the original draw of "jetpack and blade runners at the same time" no longer being an factor.

## New Stuff

- Update 6 Support
- **Fuel Recovery Period** mechanic introduced to fix a bug relating to module fuel consumption. See the "New Stuff from PowerSuit" section for more info.
- **Spatial Tear Generator Module** now provides 30 seconds of invulnerability after death-prevention teleport in case you "died" due to carrying radioactive items (thanks `Raliegh#2106` and `rdunlap#6805` for the idea)
- Significant improvements to the **Mobile Workstation** modules from the Fresh from R&D sub-mod
  - **You can now pick up items, interact with machines, use equipment, and harvest foliage while continuing to Autocraft!**
  - The details for the Automatic Crafting feature have been made more visible
  - Progressbar shows craft progress while collapsed
  - Preview icon shows what you're crafting while collapsed
  - Pressing Tab while minimized now restores the window instead of closing it, then closing it if it's already maximized.
  - Now have sounds for UI interactions
- The **Air Resistance Regulator Module** now allows you to configure different flight frictions for hover and gravity flight.
  - The slider controls the friction for whatever flight mode you are currently in.
  - There is now a sound when you change frictionless flight mode
- New visuals for the Stable Somersloop and Shield Generator
  - <https://streamable.com/zjl89q>
  - Cool animated shield texture! Hopefully coming soon to the suit itself.
- New debugging option: 'HUD Debugging Mode' to show extra suit internals in the suit hud

### New Stuff from PowerSuit base mod

- Update 6 support
- Suit HUD overlay can now be adjusted from the mod config screen
  - Position, scale, and transparency
- Suit HUD 'extra info' overlay can now be adjusted from the mod config screen
  - Also tied to the position of the Suit HUD
  - Position, scale, and transparency
- You can configure the position of the base game's "Item Pickup Notification" from the mod config screen
- Modules are now told what damage type, and damage causer, incoming damage is so they can decide what to do further based on that
- **Fuel Recovery Period** mechanic introduced
  - Introduced to fix bugs relating to fuel-consuming modules continuing to function despite the suit being out of fuel
  - Similar to your suit fuse shorting, but not as severe
  - If you entirely drain your suit of Suit Fuel and a module still wants to use fuel, the suit will enter a 5-second fuel recovery period to allow suit functions to refill the fuel tanks
  - During this time, all fuel consuming modules will cease to function, a (mod options configurable) sound will play at the start of the timeframe, and the suit UI will indicate the lack of fuel through various
    - Hoverpack controllers have blinking out of fuel indicators
    - Notice above the suit item slots in the inventory screen
    - Suit HUD blinking out of fuel icon, gray progress bar indicates how much time remains in the recovery period
    - Suit HUD fuse indicator turns yellow
  - Once fuel is obtained again, the fuel-starved modules will resume functioning again
  - If you don't obtain more fuel, the warnings will continue displaying until fuel is obtained
  - Should not affect suits that aren't consuming fuel

## Changed Stuff

- Updated the main menu scene tweaks to work on the Update 6 main menu scene.
- **Fall Dampener Module** renamed to U-Jelly Boots (thanks `The_Faulty#5992` for the idea)
- **Slug Amplification Generator** balance changes
  - Each additional copy of the module installed becomes less effective, to a point.
  - 1 is 100% effective (100% total), 2 are 70% effective each (140% total), 3 are 53% each (160% total), 4 are 45% each (180% total), 5 or more are still 45% each.
  - Further feedback would be appreciated on the discord
- **Ballistics-Resistant Plating**
  - Now applies to any damage categorized as Point Physical. As a result, now also blocks damage from Hog slams
  - Reduced damage reduction per installed module from 75% to 33%
    - This means you now need 3 modules installed instead of 2 to get full immunity, and the "first" module isn't worth as much resistance any more
  - Renamed to **Impact-Resistant Plating**
- Unstable Somersloop MAM node now costs 1 SAM ore instead of 10, and unlocks SAM ore node scanning
- Recipes that used Beacons now use other components instead
  - Alt: Emulation Shield Emitter now uses 250 caterium wire instead of 10 beacons
- Recipes that used Alien Organs now use Alien Protein instead
  - Health Regenerator Mk1-3
  - BioLoop Generator Module
- Wasteful Somerslink Depletion alt recipe now uses Pulse Nobelisk instead of Nobelisk
- Updated **Chainsaw Refueler** module to use the new equipment hud system
- Updated tooltip for **Radiation Absorbing Generator** to point out that its filter-extending properties only work for the hazmat suit module, not the normal equipment item
- New lag-reducing measure in place that kills off certain module attachments if they haven't been installed for significant amount of time. This could introduce some bugs with modules having to be drag-drop reinstalled after they disable themselves, but I'm pretty sure I didn't enable this for any troublesome ones.
- Main Menu bottom info widget is now off by default, but can be turned back on again in the configs.
- Bumped dependency version of MAM Enhancer
- Moved the debugging options to the bottom of the mod configs list

### Changed Stuff from PowerSuit base mod

- With the addition of multiple body slots to the base-game, **all PowerSuits are now a Back slot item** due to extending AFGHoverPack
  - This may change in a future version of the mod, but don't expect anything soon
  - You can safely wear a Suit in combination with any non-back-slot items
- Relocated the internal inventory slots to be further down and smaller (now that body slots take up more space)
- Renamed the Suit displays' tabs, and added a new one
  - Suit 'Modules' tab renamed to 'Overview'
  - Suit 'Stats' tab keeps its name
  - Suit 'Config' tab renamed to 'Extended'
  - New tab - 'Config' only visible in the Suit Popup (not enough space in the inventory screen side panel for it :( )
- Suit Popup Window improvements
  - You can now configure the mod configuration options for PowerSuit and any sub-mods directly from the PowerSuit Popup (right alt by default)
  - Now broken up into 2 scrollable regions
  - The installed modules region and top tabs are always in view (no longer scrolling)
  - Debug stats section is correctly expandable now
  - Prevent module item slots from displaying stretched - instead scales them down
  - Minimum window width now slightly smaller
- Suit Fuse HUD indicator now blinks red when the suit is rebooting, was solid red
- Suit Controllers now display Fuel below the Power bar instead of an Overdraw progress bar. Now the fuel info is present on both controllers.
- Increased the size of the suit HUD fuel bar to keep it from becoming invisible at smaller resolutions. If you still have this problem, use the mod options to configure its scale.
- Renamed config option 'Module Overlay Widgets' to 'Enable Custom HUD Overlay Widgets'
- Made it easier for suits to display their own widgets in the HUD. No changes visible for the end user.
- Significant internal file structure cleanup - basically every asset in every sub mod, except descriptors, has moved around. This should help me start releasing source code publicly again - previously I had to stop because of copyrighted sounds, meshes, and textures being included.

## Bugfixes

- Fixed long-standing bug where fuel-consuming modules could keep functioning even when there is not sufficient fuel for them to operate by introducing the Fuel Recovery Period system
  - If you don't like this fix, remember, you can always disable module fuel usage in the mod options.
- Fixed that client couldn't manually initiate teleports using the Spatial Tear Generator, and _probably_ prevented the base game from killing them for moving too fast.
- Fixed that the Integrated Jetpack module could require you to re-equip it if you ran entirely out of fuel, then got fuel items again more than ~10 seconds later
- Fixed that some Defense modules used HUB Parts as their dropped item mesh
- Fixed Remote Access base power cost being 50MJ despite tooltip stating 75MJ
- Probably prevented the rare case of multiple suit fuel widgets appearing in the HUD
- Fixed item recipe display correcting code (which ensures relevant recipes list Fabrication Station as a producer) accidentally correcting the wrong recipe when multiple are displayed
- Fixed ADA messages not playing their audio, and switched to using the base-game's story message delivery mechanism (thanks Topaz!)
- Fixed missing textures in Mobile Workstation widgets
- Fixed potential CDO access log spam caused by determining if a widget should be shown or not
- Corrected typo "Alt: Emulation Shield Emitter" instead of "Alt: **Emu**ation Shield Emitter"
  - Emus live in Australia, not my mod... yet...
  - This one has been in here for _years_, probably
- Fixed bug requiring reloading a save for changes to the mod's logging settings to take effect

### Bugfixes from PowerSuit base mod

- Fixed bug that would cause multiplayer hosts to crash when exiting a loaded save file while a client wearing a suit was still connected
- Fixed suit HUD sometimes disappearing after dying or using a vehicle at any point during the game session.
- Fixed long-standing bug preventing multiplayer hosts from seeing the color of the suits that multiplayer clients are wearing
- Fixed bug causing the "fake player" rendered in vehicles to not retain the suit color of the player driving it.
- Adjusted spacing in the inventory side panel widget to correct a slight gap on the top and left sides of the tab control
- Shifted the default suit HUD position slightly right (like 5 pixels) to prevent the side of the indicator light glow from being cut off
- Fixed that 'Hover' was lowercased in the suit HUD movement state indicator
- Now on version `1.0.0` so other mods can list this as a dependency without the pain caused by `^` special behavior for major versions less than one

## Known Bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) and the top of the mod page for more info. Also check out the known bugs for PowerSuit as well.

Thanks for reading, and have fun!
