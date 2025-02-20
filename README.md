# Minecraft 1.8.9 color codes in c++

## ❓ Why
Cuz I used to spend a lot of time playing Minecraft 1.8.9 and making servers and setting up configs so I had all the color codes memorized.
There are other good color console projects but it was never as simple as Minecraft system.
This was originally part of a bigger project but I thought I should release the header file for others.

## 🎨 Features
✅ **Supports all Minecraft 1.8.9 color codes**  
✅ **Supports formatting** (`&l` Bold, `&n` Underline, `&o` Italic, `&m` Strikethrough)  
✅ **Easy-to-use** (`print << "&cRed Text &lBold &eYellow!";`)  

### **3️⃣ Example Usage**
(Ive only tested this on windows)
```cpp
#include "color-console.h"

int main() {
    print << "&cRed Text &lBold &eYellow &nUnderlined &oItalic &mStrikethrough&r Reset!" << std::endl;
    return 0;
}
```

## 🖌️ Minecraft 1.8.9 Color Codes
| Code  | Color / Effect |
|-------|---------------|
| `&0`  | Black |
| `&1`  | Dark Blue |
| `&2`  | Dark Green |
| `&3`  | Dark Aqua |
| `&4`  | Dark Red |
| `&5`  | Dark Purple |
| `&6`  | Gold |
| `&7`  | Gray |
| `&8`  | Dark Gray |
| `&9`  | Blue |
| `&a`  | Green |
| `&b`  | Aqua |
| `&c`  | Red |
| `&d`  | Light Purple |
| `&e`  | Yellow |
| `&f`  | White |
| `&l`  | **Bold** |
| `&m`  | ~~Strikethrough~~ |
| `&n`  | _Underline_ |
| `&o`  | *Italic* |
| `&r`  | Reset |

## 📜 License
MIT License - Use freely in your projects.
