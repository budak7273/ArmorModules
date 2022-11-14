Mobile MAM now supports HUB and Space Elevator. Improvements for new users. Fix some visual bugs.




I got the chance to conduct some usability testing involving this mod, and a few of these changes are a result of that.

## New Stuff

- New crafting component - **Suit Framework**
  - Required to craft all Suits and unlock all Suit milestones, except Biofuel Suit (the milestone which unlocks it).
  - As a result, Jetpacks are no longer required to craft Suit Mk1-3. Reduces price of most Suits slightly.
  - This item is intended to direct people that install the mod late in a playthrough to the T2 milestone for the Fabrication Station. It's now impossible to unlock a suit without unlocking that milestone first.
- Added a fake helper recipe to the Equipment Workshop to redirect people looking for Suits to the Fabrication Station.
  - Nearly every new user I have observed goes to the Equipment Workshop to craft their first Suit. This should help redirect people to the right place.
  - This could be a little annoying for experienced users, but I think the helping hand for new users is well worth that cost. You can disable it with ContentLib if it really bothers you.
- (in PowerSuit) New visuals to draw attention to the module slots of an empty, freshly-equipped Suit. Goes away once any module is installed.
  - It's easy for new users to miss the slots for installing modules in a suit. This change should help with that.
- (in MAM Enhancer) New MAM improvements, see its changelog for more details.

## Changes

- Improvements to all sub-mod pages to make installation directions easier to find.
- Suit crafting and unlock costs slightly reduced (see 'New Stuff' section)
  - On top of this, tweaked Mk1 suit milestone to be a bit cheaper (100 less computers)
- Update descriptions of suit Crafting Components to specify that their recipes are unlocked in the MAM.
- Update description of Module Base Component to specify it, and all its alternates are unlocked in the MAM.
- Make all Fuel Charges share the same nuclear waste output. They have been valid Nuclear Reactor fuels for a while now but it was never mentioned ... or tested, really.
- The **Mobile MAM** module is now called the **Mobile MAM/HUB/Elevator Uplink** and can now connect to the HUB and Space Elevator.
  - Thanks Aquilla for helping me get HUB the connection working!
- Updated multiple incorrect default keybind listings in tooltips and descriptions - the addition of the Customizer to the game caused the default Codex key to switch.
- Fix keybind inconsistencies in help messages and add details to the tutorial about crafting.

## Bugfixes

- Fixed that the base-game recipe tooltip would always display blank space instead of "Fabrication Station" when describing where components/suits could be crafted.
  - The tooltip seems to purposely blank out any manual crafting stations from the list, for some reason.

## Known Bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) and the top of the mod page for more info.

Thanks for reading, and have fun!
