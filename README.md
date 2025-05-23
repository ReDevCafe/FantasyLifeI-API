# Fantasy Life I Mod Loader
> [!IMPORTANT]
> HEY!!! This mod loader is currently under development.. Some features may work, some may not - and honestly, there's a good chance nothing works just yet.
> If you're interested in supporting the project, contributions are welcome! Feel free to open a Pull Request!!

### How to install the Mod Loader
1. Locate  your game's binaries folder
Typically:
```mathematica
<Your Game Folder>\Game\Binaries\Win64
```
2. Copy DLLS
Place **both** of the following files into that folder:
- `ModLoader.dll`
- `version.dll`
> [!IMPORTANT]
> `ModLoader.dll` and `version.dll` can be built from source or downloaded from our [release](https://github.com/AmeliaCute/FantasyLifeI-ModLoader/releases)

Your directory should now look like:
```mathematica
Fantasy Life I/
└── Game/
    └── Binaries/
        └── Win64/
            ├── NFL1-Win64-Shipping.exe
            ├── ModLoader.dll
            └── version.dll
```
3. Run the game
When you launch Fantasy Life I, the mod loader will automatically start alongside the game

### Adding mods
1. Find the `Mods` folder
At the root of your game install directory, create a folder named `Mods` if it doesn't already exist:
```mathematica
Fantasy Life I/
├── Mods/
└── Game/
    └── Binaries/...
```

2. Install your mods
For each mod. create a subfolder inside `Mods` and drop in **both**:
- `Mod.json`
- The compiled mod DLL (e.g. `MyReallyReallyCuteMod.dll`)

Example layout:
```mathematica
Fantasy Life I/
└── Mods/
    ├── MyReallyReallyCuteMod/     
    │   ├── Mod.json 
    │   └── MyReallyReallyCuteMod.dll
    │
    └── OtherMod/... 
```
> [!NOTE]  
> If you're interested in making your own mods for Fantasy Life I, there's a ready-to-use template available here:
> [Fantasy Life I Mod Template](https://github.com/ReDevCafe/FantasyLifeI-ModTemplate)

