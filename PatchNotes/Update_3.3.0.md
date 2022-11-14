Bugfixes for Remote Access module, new Chainsaw Refueler Module, suit reboot behavior tweak.




[![UpdateBanner](https://i.imgur.com/rU1PLZg.png)](https://ficsit.app/mod/BezrE8aswqXLRX)

Be sure to check out the [version 3.0.0 patch notes](https://github.com/budak7273/ArmorModules/blob/master/PatchNotes/Update_3.0.0.md) if you haven't yet!

## New Stuff

- **Chainsaw Refueler Module**
  - Allows you to operate the Chainsaw without Solid Biofuel in your inventory
  - Drains your Suit Fuel to refuel the Chainsaw
  - Should also work with modded chainsaws as long as they extend the base game chainsaw. I have not tested this, though.

## Changed Stuff

- All Power Capacity modules (in Suit Regulation) have had their capacity bonuses *significantly* increased
  - This change was made with a specific Coming Soon™ mod in mind
  - My goal is to make these modules more viable as opposed to just installing more generators instead
  - 4x higher Capacity bonuses than before
  - 'Fuel Cell' Module also provides 4x the fuel capacity bonus as before
- (Base PowerSuit mod) When your PowerSuit finishes rebooting, it now has a little bit of power to start off, and is capable of overdrawing again
- Reboot and Overdraw times of all suits changed to accommodate this change

## Bugfixes

- Fixed that the Remote Access module would consume power even when you're not using the keybind (in Must Press Keybind mode)
- Changed how the Remote Access module applies its power cost. Base power usage is now 50MJ, which should result in about the same power consumption as before
- Fixed Remote Access module only working for whoever installed it most recently in multiplayer
- Fixed Remote Access module target detection. I promise I passed my Vector Calculus class...

## Misc Stuff

Are you interested in helping to translate the mod to your native language? It could take a while until I figure out how to get these packed into the mod correctly, but if you'd like, you can join the Crowdin [here](https://crwd.in/powersuit-modules) and start translating. Contact me on the [Nog's Mods Discord](http://discord.gg/zqp6U7Y7Nu) if you have any questions, or if you'd like me to add a language other than the ones currently listed.

## Known bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) or the top of the mod page for more info.

Thanks for reading, and have fun!
