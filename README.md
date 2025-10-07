# Fantasy Life I Mod Loader
> [!IMPORTANT]
> HEY!!! This mod loader is currently under development.. Somes features work (about 25%-35%??) but some things might break if you try weird stuff, that said, if you take your time and experiment a little you can already pull off some pretty cool things
> HEY!!! This mod loader is currently under development.. Somes features work (about 25%-35%??) but some things might break if you try weird stuff, that said, if you take your time and experiment a little you can already pull off some pretty cool things
> If you're interested in supporting the project, contributions are welcome! Feel free to open a Pull Request!!

### How to install the Mod Loader
1. Locate your game's binaries folder
```mathematica
Fantasy Life I/
└── Game/
    └── Binaries/
        └── Win64 ← [ THIS ONE]
```
2. Place **both** of the following files into that folder:
- `ModLoader.dll`
- `version.dll`
> [!IMPORTANT]
> `ModLoader.dll` and `version.dll` can be built from source or downloaded from our [release](https://github.com/ReDevCafe/FantasyLifeI-API/releases)

Your directory should now look like:
```mathematica
Fantasy Life I/
└── Game/
    └── Binaries/
        └── Win64/
            ├── NFL1-Win64-Shipping.exe
            ├── ModLoader.dll
            ├── version.dll
```
3. When you launch Fantasy Life I, the mod loader will automatically start alongside the game

### Adding mods
> [!NOTE]  
> If you're interested in making your own mods for Fantasy Life I, there's a ready-to-use template available here:
> [Fantasy Life I Mod Template](https://github.com/ReDevCafe/FantasyLifeI-ModTemplate)

1. Inside the Game/Contents directory of your game installation, create a folder named `Mods` if it doesn't already exist:
```mathematica
Fantasy Life I/
└── Game/
    └── Contents/
        └── Mods/
```

2. Place your `.fliarchive` mod files inside the `Mods` directory

Example layout:
```mathematica
Fantasy Life I/
└── Game/
    └── Contents/
        └── Mods/
            ├── MyMod.fliarchive
            └── OtherMod.fliarchive 
```

### Build the ModLoader

```bash
    $ cmake -B build -G "Ninja" -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl -DMLDEBUG=OFF
```
> [!NOTE]  
> For debugging u might need to set MLDEBUG to ON: `-DMLDEBUG=OFF`
> But it's only if you need the pdb, otherwise let the option off.

```bash
    $ cmake --build build --config Release
```