Early Release 3

The below changelog has been _mostly_ updated to reflect the changes in this update as well, so if you want more detailed info, read on.

- Division of the mod into sub-mods
    - PSM is now **split into multiple sub mods** so people can pick and choose what they want to use. There are now 7 mods which together form the full PowerSuit Modules selection of modules.
    - You can remove some of the sub-mods and still play with the remainder
    - Power Generation is an unenforced requirement, because how are you going to use a suit when it can't generate any power? Other mod releases down the line will alleviate this
- Introduction of the Fabrication Station
    - All modules and suits are crafted in the new Fabrication Station unlocked in the hub
- All modules now unlocked via MAM trees
    - Suits still unlocked in the HUB for now
- MAM Enhancer (dependency mod) is used to display extra info about MAM nodes to the player.
    - This way you can still see details about what you're about to unlock like you can in the HUB
- A bunch of new Special Modules by Nog that I haven't fully tested + aren't done yet
- New suit UI and custom widgets system is still WIP
- **Almost certainly still multiplayer bugs**
- Recipes and MAM node costs not final

Known bugs:

- Horizontal Thruster and Vertical Thruster module still not working as intended, but may be working for you
- There are no ADA messages for the new MAM nodes yet
- Crude Radiation Plating doesn't provide any radiation resistance
- Fuel Runners don't consume Fuel
- Issues with Hazmat Suit still consuming filters outside of radiation
- Configurable Dampening module does nothing
- Night Vision module adjusting strength is WIP

============================================

Early Release 2

- Basic and Advanced Cooling, as well as the Night Vision modules, will no longer crash you on equip.
- Fueled Flight modules (Jetpack, Thrust Boots, Hover Jetpack) no longer lose their suit fuel tank and fuel allowance bonuses when you run out of fuel

- New Balance config option to disable fueled jetpacks from needing fuel
- New sounds option to disable ADA message sounds
- New debugging config option to entirely suppress ADA message delivery
- Hazmat and Gas Mask now use the OMW system to show you fill level. Hazmat also shows radiation intensity.
- Fueled Generators (Bio Burner, Fuel Burning Generator, Miniature Nuclear Reactor) use the new IMW system to show you how much power they are producing from your inventory screen.

============================================

Update 4 support, tons of new Modules and functionality, Suit UI overhaul, MAM integration and custom crafting station. Divided into sub-mods so you can pick and choose what you want to play with.
<!-- The above line is what the update feed should show when webhooked to the Discord -->

### Changes Overview

- *Lots* of new functionality on old modules (keep reading)
- Revamp of how modules are unlocked and crafted.
- The base PowerSuit modules mod has been split into many sub-mods so you can pick and choose what modules you want to play with. If you want them all, **I suggest installing the [PowerSuit Modules: All Modules Modpack](https://ficsit.app/mod/CEjJnBXkLEiszx) mod, which will install all of them for you.**
- New Hoverpack-logic-based flight means that there should no longer be lag-related flight problems.
- Multiplayer Should™ be working for most modules.
- Your old pre-Update 3 will have lost all of their suits and modules - sorry. Read more on why this happened below.

Join the [Nogs Mods discord](http://discord.gg/zqp6U7Y7Nu) to report bugs and suggest changes, or contact me on the [main modding discord](https://bit.ly/SatisfactoryModding), `Robb#6731`.

## Big Changes!

The base PowerSuit mod has vastly changed since SML2, and I've finally got (mostly) everything updated, along with a boatload of new features. The Suit now uses an 'Attachments' system, allowing Modules to execute custom Blueprint (or C++) logic to interface with the suit. This is great, because it means that modules can do a ton of fun stuff that they couldn't before. But it was also a *ton* of work to get everything brought over, as I had to rewrite a significant bit of logic that used to be built into the suit.

Since everyone's I have also taken the opportunity to **split the PowerSuit Modules mod into separate sub-mods.** This makes it easy for players to pick and choose what modules they want to play with. It also makes it easy for other mod developers to extend or require just some of my sub-mods, and hopefully makes updating them less of a hassle, too. As a consequence of everything changing up and moving around in this update, unfortunately **items from your Update 3 saves are lost.** I think this is an acceptable sacrifice because everything is changing price and balance anyways. The mod is quite different from what it used to be in Update 3.

- The Mk1-Mk3 suits that used to be in the PowerSuit mod itself are now added by this mod instead.
    - I have tweaked the abilities of these suits slightly, such as increasing slot counts.
    - Since the suits have moved mods, you will have also lost your suits from Update 3 saves. Sorry. Even if they hadn't moved, all the modules have, and the inventory system has changed drastically, and they probably would have broken anyways.
- The user interface of the PowerSuit has vastly changed and now supports per-Module custom overlays and displays. These are in use by the Gas Mask and Hazmat Suit, among others.
- All Modules are now **unlocked at the MAM** (keep reading below)
- All Modules and Suits are **crafted at a special station** (keep reading below)
- Both this mod and PowerSuit are using the new **SML Keybinds and Options features.** You can change config settings on main menu's Mods menu, and keybinds from the base game's keybindings menu. The reload config command no longer exists.

### New Core Features

- **MAM Trees!**
    - That's right, it's finally here. The feature I have wanted since the very start of the mod!
    - PowerSuit Modules now depends on the recently released [**MAM Enhancer**](https://ficsit.app/mod/EPUmESEWaBCk4n) mod
        - This mod allows you to view extra info about what you're unlocking in the MAM.
        - You can select a node in the tree and view its details on the right
        - Hover over the Module the node unlocks to see its description via tooltips
        - View the tooltips of the ingredients required to unlock the MAM node
    - All crafting components and modules are now unlocked via MAM trees. These trees become visible once you have obtained a set of Blade Runners.
    - After you research modules, you can craft them at the new...
- **Fabrication Station!** (Module Crafting Workbench)
    - ![TODO image here]() 
    - It might look a little familiar to some of you. After all, R&D does not waste.
    - In order to keep the clutter out of the base game equipment workshop and craft bench, all module and suit crafting recipes can be found here instead.
- **Module Item Consumption!**
    - The Gas Mask and Hazmat Suit modules now require filters and iodine filters respectively to run. It will consume them from your inventory at the same rate as the base game gas mask/hazmat suit.
    - You can see what item the module (or suit - you can see it's internal fuel refill buffer now) has consumed, and how much of said item is left, with a fancy new SML tooltip handler. Oooo, snazzy.
    - ![Tooltip](https://i.imgur.com/ozyLlGv.png)
    - You can also view storage levels from the HUD element they will add to your display.
    - ![TODO Image here]() 
    - Don't like modules consuming items? You can turn it off in the...
![](https://i.imgur.com/VImfoyE.png)
- **Configuration!**
    - You can now configure the mod from the main menu with the SML3 Config system!
    - You can enable or disable debug logging. Turning this stuff on can be helpful for reporting issues with the mod.
    - You can control some of the balance settings for the mod. For example, you can make the Gas Mask module not require Filters to operate.
    - You can also make it so that Jetpacks no longer require fuel to operate, if that's your cup of tea.
    - In the configs, you can also control the volume of the new...
- **Sounds!**
    - Many of modules make sounds now depending on what you're doing with them.
	- This is largely still WIP. I really need a better repertoire of sounds to use. Working on that.
	- **Don't like the current sounds? Turn them off in the mod config.**
    - On Equip/Unequip sounds for some modules. More to come.
    - Shield modules now make a sound when you take damage, your shield breaks, shield recharge starts, shield recharge finishes
    - Gas Mask and Hazmat Suit make sounds when they refill their filter. Gas Mask plays sound when entering and exiting gas zones.
    - Flight sounds aren't ready yet, unfortunately.
	- As stated earlier, new ADA messages are still in the works.
    - Rare easter egg sound. Don't die looking for it.
- **Overlay** and **Inventory Widgets!**
    - Ever wondering how much of that Filter is left in your shiny new Gas Mask module? Well, wonder no more, because it draws it on your HUD right above the suit UI!
    - ![OMW]()
- (PowerSuit feature) **Install modules directly from the inventory!**
	- By the power of Nog, the Suit has gotten a massive UI upgrade. You can install Modules directly from the main inventory! You can still open the suit HUD like before, but not when your main inventory is open.
	- ![New suit main inventory]()
- **Smart Tooltips!**
    - Display how much Fuel is in a suit's buffer, what modules are installed in a suit without equipping it, and how much of an item is in a module's buffer (ex Gas Mask). This will be getting even better later on.
	- ![Tooltip Screenshot]()
- **More that I probably forgot to put here!**

### New Modules

Keep in mind that these new modules are spread across the various sub-mods.

- **Integrated Hover Pack**
    - It's the hover pack, but as a PowerSuit module!
        - Runs on Suit Power, so you can keep hovering outside of the range of your base if you have enough power.
        - The vanilla 'power grid' connection feature is currently disabled, but will be coming soon.
- **Fuel-Burning Generators**
    - **Bio Burner**, **Fuel Burning Generator**, **Miniature Nuclear Reactor Module**
	- The mod has been re-balanced to encourage active power generators instead of passive ones.
    - Burns Suit Fuel to generate power for your suit at a significant rate.
    - Also allows your Suit access to additional fuel options
	- The **PowerSuit Nuclear Fuel Cell** item is now available for your late-game fueling options.
- **Zapline Acceleration Coils**
    - Speed around on your power lines with a stacking speed boost! Helps the Zapline stay more relevant later in the game and gives a nice boost early on.
- **Zapline Power Tap**
    - Hook on to your power lines with the Zapline, and instead of moving, refill your Suit Power and Suit Fuel at an impressive rate. Great for refueling your flight modules without landing. Eventually this will an the early-game equivalent of the Hover Pack 'power grid' connection, actually consuming power from the power line you're hooked on to.
- **Smart Belt Immunity Module**
    - That's right, it's finally here! Walk around on belts as much as you'd like, unless you're holding sprint. If you're holding sprint, _belts will only ever assist your movement, never fight it_. A feature I've wanted in Factorio for a long time is finally here in Satisfactory!
- **Spatial Tear Generator**
    - Keep your items on death, or teleport back to the HUB at will.
    - Drains charge from a Synchronized Somerslink Regulator to do so, an new expensive but renewable resource, with multiple options for obtaining and more coming soon.
- **Extendo Arm Module**
    - Press a keybind (TODO what keybind?) to have drastically extended reach distance. Interact with buildings at a significantly increased range.
- **Mobile Workstations**
	- Craft Bench, Equipment Workshop, Fabrication Station, MAM, and (WIP) HUB are all accessible on-the-go!

- **Ones I probably forgot to put here!**

### Changed Modules + Recipes

- Energy consumption of **all modules** has been changed. Coffee Stain has now told us that hover flight should cost 100MW of electricity via the Hover Pack. As such, energy usage and suit capacity has been balanced around this value. Expect further changes to this in the future.
- Fuel and power consumption of **all flight modules** has been changed for the same reason as above.
- Previous generation modules now generate significantly less power, as they are passive power generation, to encourage the use of the new active generators (Fuel Burning).
- New recipe for **Module Base Component** that requires Reinforced Iron Plate instead of Steel Plate and Modular Frame instead of Heavy Modular Frame, allowing you to craft modules (without having to scavenge Drop Pods, the original intended method of obtaining these parts) before unlocking Steel production. To compensate, the original recipe now takes significantly longer to craft and consumes more resources. The original recipe is accessible in the MAM immediately after unlocking the costly Iron-tier recipe.
- Buffed the alternate recipes for Module Base Component
- **Integrated Nuclear Reactor** module renamed to **Uranium RTG Module** to reflect the fact that it does not consume resources to operate. Recipe requires (Uranium) Nuclear Waste instead of cells.
- **Crude Radiation Plating** has been fixed to actually slow you down as originally envisioned. Also slightly reduces your jump height. Wearing these should be noticeable, but not too annoying, as their effects can be easily countered by other modules
- **Suits Mk1-3** have been given extra inventory slots and Mk3 has been made cheaper, notably no longer requiring Turbo Motors (hmm, maybe a new highest-tier suit will be introduced in the future?)
- **Shield modules** now consume a small amount of power at all times to maintain the shield and additional power when recharging.
- **Gas Mask** and **Hazmat Suit** modules now require much fewer of their respective filters to craft since they now actually use them for operation. They display their filter storage levels in the HUD as well as their item tooltips. The Hazmat Suit will also inform you of local radiation intensity.
- The **Night Vision Module** should now work in multiplayer and allows you to control the brightness levels from your inventory.
- **Hypertube Acceleration module** now only increases max speed by 25m/s per module, consumes power when actively boosting, and consumes additional power proportional to how fast you are traveling.
- **Health Regenerator modules** now only consume power when actually healing you.
- **Fall Dampening module** now only consumes power when falling as opposed to at all times. It also has an icon.
- **Fuel Pumps** no longer have an out-of-fuel power penalty and now increases transfer speed by 25% instead of 50%. Note that 'transfer speed' is overall quite different now due to the new refueling handling, so the old and new speeds are hard to compare.
- The the Suit Refueling system you are familiar with from the Update 3 version of the mod is back (it's part of this mod now and not PowerSuit) and you can see the old fuel information in your suit tooltip for now: ![](https://i.imgur.com/vLT04PE.png)
- **More that I probably forgot to put here!**

### Removed/Still WIP Modules and Features

- ADA Messages are temporarily out for this version. Now that every module is its own schematic, there is no good time to award the old ADA messages. I haven't had the time to write one for every module yet, but I will eventually.
- **Weak Air Dampening** and **Strong Air Dampening** modules are gone for good and have been replaced by the **Configurable Dampening Module**.
- Probably a couple more things I forgot that I removed. If something seems to be missing, ask me about it on Discord.

### Assorted Changes and Bugfixes

- Fun main menu tweak! The Pioneer got a big upgrade.
- Mod icon now shows in the in-game mods list. Long overdue. Glad that SML3 finally fixed the problem that was causing this.
- Suits no longer consume fuel items in certain multiples of items - it's always one at a time.
- Jetpack and Hover Jetpack module now require you to have fuel to operate, whereas previously they could operate on just Power at an increased cost. You can turn this off in the config.
- New icon for Hypertube Acceleration Coils, Fall Dampening Module, Packaged Coolant, Nuclear Fuel Charge, probably more I forgot.
- Hazmat Module now actually gives radiation immunity (instead of just damage resistance), so standing in radioactive areas no longer makes a ton of noise.
- (Internal) ModMult properties combine with base-game values and each other in a more logical manner. This is what allowed the Crude Radiation Plating change.
- (Internal) Power (and fuel) consumption and production are split now, resulting in 'correct' fuel consumption increase resulting values. You probably wouldn't have noticed this in the past unless you were really looking for it.
- Probably more that I forgot to put here.

## Watch Out!

The following things will probably be changing in more updates coming Soon™:

- Crafting and unlocking costs will likely be further re-balanced. I think they might be a bit too expensive right now. I will be using [ContentInfo](https://ficsit.app/mod/4u8Z4c4bCAS5PN) to help me balance the recipes. Check it out!
- Nog and I plan to make the Suit capable of connecting to your base's grid like the Hover Pack does. There are a couple debilitating bugs with this right now, which is why we have it disabled for now.
- Module Power and Fuel stats will be re-balanced. I know I won't get this right on the first try.
- The new Suit Fuel-burning Generators may get different logic to decide when they turn on. Check out the config if you want to modify this some yourself.
- Somerslink Regulators may be moved earlier or later in the game, or an alternative mod may be released to make them easier to craft/access.

## Coming Eventually™

(In no particular order)

- Connecting your suit to the power grid. Power your suit from your base, or vice versa!
- Fancy tooltips and icons that help you better identify what modules do at a glance
- Aquatic modules
- Docs and mini demo videos of using different modules
- Tie-ins with other mods (Better Blade Runners? Exosuit? Refined Power?)
