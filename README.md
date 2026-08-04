# 🏰 Dungeon Crawler RPG (C++)

A console-based turn-based RPG dungeon crawler built in **C++**. Players take control of a hero and battle through a series of enemies, including a Slime, Goblin, and Minotaur. The project demonstrates fundamental C++ programming concepts such as object organization, game loops, combat systems, and modular code structure.

---

## 🎮 Game Overview

The player enters a dungeon and must defeat three enemies in sequence:

1. 🟢 **Slime** - A weak enemy designed as the first challenge
2. 🗡️ **Goblin** - A stronger opponent with increased damage
3. 🐂 **Minotaur** - The final boss with high health and attack power

The goal is to survive all encounters and defeat the final boss.

---

# ⚔️ Combat System

Combat is turn-based. During each player turn, choose an action:

### Attack
- Deal damage based on the player's attack stat.
- Damage is affected by enemy defense.

### Defend
- Reduces incoming damage from enemy attacks.
- Useful against powerful enemies.

### Heal
- Restores player health.
- The enemy deals reduced damage while the player is healing.

---

# 📊 Character Stats

## Player

| Stat | Value |
|---|---:|
| Health | 100 |
| Attack | 10 |
| Defense | 70% reduction while defending |

---

## Enemies

| Enemy | Health | Attack | Defense |
|---|---:|---:|---:|
| Slime | 30 | 30 | 100 |
| Goblin | 50 | 40 | 50 |
| Minotaur | 100 | 60 | 70 |

---

# 🛠️ Technologies Used

- **C++11 or later**
- Standard C++ Library
- Object-Oriented Programming concepts
- Multi-file C++ project structure

---

# 📁 Project Structure

```
Dungeon-Crawler/
│
├── main.cpp
│
├── MainMenu.h
├── MainMenu.cpp
│
├── Gameplay.h
├── Gameplay.cpp
│
├── CombatSystem.h
├── CombatSystem.cpp
│
├── PlayerStats.h
├── PlayerStats.cpp
│
├── EnemyStats.h
├── EnemyStats.cpp
│
├── Utils.h
├── Utils.cpp
│
└── README.md
```

---

# 🚀 Installation & Running

## Requirements

You need:

- A C++ compiler
- C++11 support or newer

Examples:
- GCC
- Clang
- Visual Studio

---

## Compile

Using GCC:

```bash
g++ -o dungeon_crawler main.cpp MainMenu.cpp Gameplay.cpp CombatSystem.cpp PlayerStats.cpp EnemyStats.cpp Utils.cpp
```

---

## Run

Linux / macOS:

```bash
./dungeon_crawler
```

Windows:

```bash
dungeon_crawler.exe
```

---

# 🎯 How To Play

1. Launch the game.
2. Select **Play** from the main menu.
3. Choose an action during combat:

```
1 - Attack
2 - Defend
3 - Heal
```

4. Defeat enemies in order:

```
Slime → Goblin → Minotaur
```

5. Win by defeating all enemies.

---

# 🧠 C++ Concepts Demonstrated

This project demonstrates:

- Header files and source files
- Structs and classes
- Functions
- References
- Game loops
- Conditional logic
- Input handling
- Basic object-oriented design
- Modular programming

 ---

# 🔮 Future Improvements

Planned features:

- [ ] Convert structs into classes
- [ ] Add inheritance-based character system
- [ ] Add random damage calculations
- [ ] Add experience and leveling system
- [ ] Add inventory and item system
- [ ] Add multiple weapon types
- [ ] Add save/load functionality
- [ ] Add more enemy types
- [ ] Add visual health bars
- [ ] Create Unreal Engine version

---

# 📚 Learning Goals

This project was created to practice:

- C++ fundamentals
- Game programming concepts
- Object-oriented programming
- Designing reusable systems
- Building a foundation for larger game projects

---

# 👤 Author

Miguel Ramos

---

