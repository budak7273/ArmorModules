SML3.7/server support. Bugfixes.




If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## Server Support

This update brings server support for the mod.
Remember that playing on a dedicated server makes everyone a client,
so any bugs that previously affected multiplayer clients will now affect all players.
Namely, the occasional need to re-equip the suit upon re-joining the game.

Unless there are any severe crash-causing bugs,
I likely won't update this mod until Satisfactory's 1.0 release.
See below for more details.

## Notes for the Future

Once Satisfactory 1.0 releases
I will be quite busy updating the modding toolkit,
so my mods may not be updated swiftly.

First, I plan to release updates for all of my currently updated mods
with no new features,
assuming the game changes don't break their core features.
The purpose of this round of updates
is to allow you to keep playing your saves from before 1.0 if you so choose,
but you should probably start new saves anyways for the story.

Next, I plan to change and rebalance my mods as I see fit
to work with the new game systems introduced in 1.0.
For example, the Somersloop crafting system will likely need some kind of change since Somersloops will have 'real' functionality in 1.0.
The scope of these changes will vary depending on the mod.
It could even be a total rewrite that could lead to you "losing" your suits because they exist in such a different format.
Because I can't yet know the scope of the changes in my rebalance/rewrite,
I don't think it's worth it to work on the mod further right now
when that work could end up totally obsoleted by the rewrite anyways.
That time would be better spent on the modding toolkit.

I'll have more details Later™ on the Discord once we know more about 1.0,
so just keep this in mind for now.

## Changed Stuff

- Modified the description of an unreleased (cheats-only) module to be more accurate (see [this github issue](https://github.com/budak7273/ArmorModules/issues/36))
  - Thanks mikeloeven for bringing this up
- Modified the HUB milestone sorting so the Mk1 suit appears before the Mk2 suit

## Bugfixes

- Fixed that equipment would be detached from the player's hands _after unequipping the suit_ with non-standard FOVs. Note that the issue still persists while wearing the suit, see Known Bugs below
  - Thanks Th3Fanbus for fixing this!
- Fixed that the PowerSuit mods info bar at the bottom of the screen could fail to appear for multiplayer clients when in the Equipment Workshop

## Known Bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) and the top of the mod page for more info. Also check out the known bugs for PowerSuit as well.

- [Wearing a suit causes handheld equipment to visually detach from your hands when using non-standard FOVs](https://github.com/budak7273/ArmorModules/issues/40)
- There have been reports of choppy client movement in multiplayer. If you are encountering this, please contact me on the discord so we can try to figure out the cause.
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

- Added [TFIT - The Ficsit Information Tool](https://ficsit.app/mod/TFIT) to the All Modules Modpack.
  - PowerSuit Modules will soon take advantage of this mod's features to offer tooltips for modules and suits that are easier to read and more informative.
  - By default, the mod hides the "Recipes" section of tooltips unless you are holding your Sprint key, making it easier to read longer item tooltips that could otherwise be pushed offscreen.
  - Don't like one of the mod's features? Two options:
    - Disable it in the Mod Configs for TFIT - the mod is incredibly configurable!
    - Unsubscribe from the "All Modules Modpack" mod and instead subscribe to the individual mods you want to use. -->
