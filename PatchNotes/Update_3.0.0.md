Hooray! Update! At long last.

### Changes Overview

- *Lots* of new functionality on old modules (keep reading)
- If you install a Module that hasn't fully been updated yet, you'll get a message in chat.
- Many modules now make sounds - volume can be controlled in the config.
- New Hoverpack-logic-based flight means that there should no longer be lag-related flight problems
- Multiplayer Should™ be working for most modules
- Your old saves should *partially* work, but **you will need to re-craft suits** (and you will have lost their contained modules). Read more on why this happened below.

Join the [Nogs Mods discord](http://discord.gg/zqp6U7Y7Nu) to report bugs and suggest changes, or contact me on the [main modding discord](https://bit.ly/SatisfactoryModding), `Robb#6731`.

## Big Changes!

The base PowerSuit mod has vastly changed since SML2, and I've finally got (mostly) everything updated, along with a boatload of new features. The Suit now uses an 'Attachments' system, allowing Modules to execute custom Blueprint (or C++) logic to interface with the suit. This is great, because it means that modules can do a ton of fun stuff that they couldn't before. But it was also a *ton* of work to get everything brought over, as I had to rewrite a significant bit of logic that used to be built into the suit.

- The Mk1-Mk3 suits that used to be in the PowerSuit mod itself are now added by this mod instead.
    - I have tweaked the abilities of these suits slightly, such as increasing slot counts.
    - Since the suits have moved mods, you will have lost your suits from Update 3 saves. Sorry. Even if they hadn't moved, the inventory system has changed drastically, and probably would have broken anyways.
- Both this mod and PowerSuit are using the new SML Keybinds and Options features. You can change config settings on main menu's Mods menu, and keybinds from the base game's keybindings menu. The reload config command no longer exists.

## Watch out!

The following things will probably be changing in more updates coming Soon™:

- Hub milestones will be moved to MAM researches... probably. I'm not sure if the MAM could be coerced into allowing you to see module descriptions before you unlock them, which is very important to me.
- Crafting and unlocking costs will likely be further re-balanced to U4 materials.
- Module Power and Fuel stats will be re-balanced. I know I won't get this right on the first try.
- The new Suit Fuel burning Generators may have the logic for when they decide to turn on changed. Check out the config if you want to modify this some yourself.

### New Features


- **Module Item Consumption!**
    - The Gas Mask and Hazmat Suit modules now require filters and iodine filters respectively to run. It will consume them from your inventory at the same rate as the base game gas mask/hazmat suit.
    - You can see what item the module (or suit - you can see it's internal fuel refill buffer now) has consumed, and how much of said item is left, with a fancy new SML tooltip handler. Oooo, snazzy.
    - ![](https://i.imgur.com/ozyLlGv.png)
    - Don't like modules consuming items? You can turn it off in the...
![](https://i.imgur.com/VImfoyE.png)
- **Configuration!**
    - You can now configure the mod from the main menu with the SML3 Config system!
    - You can enable or disable debug logging. Turning this stuff on can be helpful for reporting issues with the mod.
    - You can control some of the balance settings for the mod. For example, you can make the Gas Mask module not require Filters to operate.
    - In the configs, you can also control the volume of the new...
- **Sounds!**
    - Lots of modules make sounds now depending on what you're doing with them.
    - On Equip/Unequip sounds for many modules. More to come.
    - Shield modules now make a sound when you take damage, your shield breaks, shield recharge starts, shield recharge finishes
    - Gas Mask and Hazmat Suit make sounds when they refill their filter. Gas Mask plays sound when entering and exiting gas zones.
    - Flight sounds aren't ready yet, unfortunately.
    - Rare easter egg sound. Don't die looking for it.
- **More that I probably forgot to put here!**

### New Modules

- **Integrated Hover Pack**
    - It's the hover pack, but as a PowerSuit module! Currently offered as another milestone when you unlock the Hover Pack. The 'power grid' connection feature is currently disabled but will be coming soon.
- **Fuel-Burning Generators**
    - **Bio Burner**, **Fuel Burning Generator**, **Miniature Nuclear Reactor Module**
    - Burns Suit Fuel to generate power for your suit at a significant rate.
    - Also allows your Suit access to additional fuel options
- **Zapline Acceleration Coils**
    - Speed around on your power lines with a stacking speed boost! Helps the Zapline stay more relevant later in the game and gives a nice boost early on.
- **Zapline Power Tap**
    - Hook on to your power lines with the Zapline, and instead of moving, refill your Suit Power and Suit Fuel at an impressive rate. Great for refueling your flight modules without landing. Eventually this will an the early-game equivalent of the Hover Pack 'power grid' connection, actually consuming power from the power line you're hooked on to.
- **Ones I probably forgot to put here!**

### Changed Modules + Recipes

- Energy consumption of **all modules** has been changed. Coffee Stain has now told us that hover flight should cost 100MW of electricity via the Hover Pack. As such, energy usage and suit capacity has been balanced around this value. Expect further changes to this in the future.
- Fuel and power consumption of **all flight modules** has been changed for the same reason as above.
- Previous generation modules now generate significantly less power, as they are passive power generation, to encourage the use of the new active generators (Fuel Burning).
- New recipe for **Module Base Component** that requires Reinforced Iron Plate instead of Steel Plate and Modular Frame instead of Heavy Modular Frame, allowing you to craft modules (without having to scavenge Drop Pods, the original intended method of obtaining these parts) before unlocking Steel production. To compensate, the original recipe now takes significantly longer to craft and consumes more resources. The original recipe is accessible in T3 now.
- Buffed the alternate recipes for Module Base Component
- **Integrated Nuclear Reactor** module renamed to **Uranium RTG Module** to reflect the fact that it does not consume resources to operate. Recipe requires (Uranium) Nuclear Waste instead of cells.
- **Crude Radiation Plating** has been fixed to actually slow you down as originally envisioned. Also slightly reduces your jump height. Wearing these should be noticeable, but not too annoying, as their effects can be easily countered by other modules
- **Suits Mk1-3** have been given extra inventory slots and Mk3 has been made cheaper, notably no longer requiring Turbo Motors (hmm, maybe a new highest-tier suit will be introduced in the future?)
- **Shield modules** now consume a small amount of power at all times to maintain the shield and additional power when recharging.
- **Gas Mask** and **Hazmat Suit** modules now require much fewer of their respective filters to craft since they now actually use them for operation.
- **Hypertube Acceleration module** now only increases max speed by 25m/s per module, consumes power when actively boosting, and consumes additional power proportional to how fast you are traveling.
- **Health Regenerator modules** now only consume power when actually healing you.
- **Fall Dampening module** now only consumes power when falling as opposed to at all times
- **Fuel Pumps** no longer have an out-of-fuel power penalty and now increases transfer speed by 25% instead of 50%. Note that 'transfer speed' is overall quite different now due to the new refueling handling, so the old and new speeds are hard to compare.
- The the Suit Refueling system you are familiar with from the Update 3 version of the mod is back (it's part of this mod now and not PowerSuit) and you can see the old fuel information in your suit tooltip for now: ![](https://i.imgur.com/vLT04PE.png)
- **More that I probably forgot to put here!**

### Removed/Still WIP Modules and Features

- Air speed modules are not currently working
- **Weak Air Dampening** and **Strong Air Dampening** modules are still gone. They'll probably make an appearance again later. 

### Assorted Changes and Bugfixes

- Fun main menu tweak! The Pioneer got an upgrade.
- Mod icon now shows in the in-game mods list. Long overdue. Glad that SML3 finally fixed the problem that was causing this.
- Suits no longer consume fuel items in certain multiples - it's always one at a time.
- New icon for Hypertube Acceleration Coils, Fall Dampening Module, Packaged Coolant, Nuclear Fuel Charge, 
- Hazmat Module now actually gives radiation immunity (instead of just damage resistance), so standing in radioactive areas no longer makes a ton of noise.
- (Internal) ModMult properties combine with base-game values and each other in a more logical manner. This is what allowed the Crude Radiation Plating change
- (Internal) Power (and fuel) consumption and production are split now, resulting in 'correct' fuel consumption increase resulting values. You probably wouldn't have noticed this in the past unless you were really looking for it.
- Probably more that I forgot to put here.

## Coming Soon™

(In no particular order)

- Fancy tooltips that help you better identify what modules do at a glance
- Aquatic modules
- Docs and mini demo videos of using different modules
- Tie-ins with other mods (Better Blade Runners? Exosuit? Refined Power?)
- Connecting your suit to the power grid. Power your suit from your base, or vice versa!
- Modules possibly unlocked via the MAM and possibly split off into separate mods. I want to make sure the MAM can still display the amount of info I want to players before they unlock the module.
- Modules will be crafted at a separate workstation so as to avoid cluttering the Equipment Workshop.
- Some modules will allow you to configure their properties from the suit inventory window.