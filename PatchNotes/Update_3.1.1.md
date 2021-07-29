Fixes to Suit Fuel widget flickering + support, also fix and unintentionally high Fuel consumption by all Modules.




[![UpdateBanner](https://i.imgur.com/rU1PLZg.png)](https://ficsit.app/mod/BezrE8aswqXLRX)
Be sure to check out the [version 3.0.0 patch notes](https://github.com/budak7273/ArmorModules/blob/master/PatchNotes/Update_3.0.0.md) if you haven't yet!

## Changed Stuff

- Suit Mk3 now has 3 more slots, totaling 28, so it takes up an even 4 rows in the player inventory screen.
- There is now a config option to never show the suit Fuel widget under any conditions, in case you would rather have the screen space than the info.

## Bugfixes

- Multiplayer clients should be able to see their Fuel Info widgets now.
- Fixed flickering of Item Consumer widgets.

## Known bugs (sorry)

### _Recently Introduced, or previously unnoticed_

- Multiplayer clients may need to re-equip Vertical Thruster modules they may have had installed on join, otherwise their hands will jitter during flight. This one's a real head scratcher.
- Vertical Thruster module provides an unintentionally high speed boost when traveling diagonally.

### _From previous versions_

- Multiplayer clients can't see the host's equipped suit color, but can see the color on the hoverpack and controllers
- Modules that require fuel to operate still don't turn off when you lack fuel.
  - This is more complicated than it may seem, because a module can change whether it is usable or not very often due to fuel levels, which can cause a tolerable but measureable amount of lag.
- Hoverpack controllers will be floating separate from your hands if you use an FOV other than 90.
  - There is a config option in PowerSuit to hide them if this bothers you.
- I might have accidentally broken some module sounds, let me know if something seems missing.

Thanks for reading, and have fun!
