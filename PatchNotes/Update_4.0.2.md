Fixed UObject crash caused when other mods re-create the player HUD




Be sure to read the 4.0.0 changelog - lots of stuff changed!

## New Stuff

- **Slug Amplification Generator** and Fuel Consuming Generator-type modules use the 'compatible item descriptors' tooltip feature to visually display the fuels (or relevant items) they allow in their tooltip.

## Bugfixes

- Fix that the suit would constantly try to re-create a new HUD widget when it detected that it wasn't displayed correctly, eventually leading to a UObject limit crash
  - It would add the widget to a HUD that was no longer visible because another mod caused it to be removed or re-created. Most common case for this was Difficulty Tuner.
  - Thanks ramcneal, Swift, Ficsit Employee #597364, xVilho, Xynariz, No. 5, and SifVerT for helping track this down

## Known Bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) and the top of the mod page for more info. Also check out the known bugs for PowerSuit as well.
