# Neovim

- mkdir .config/nvim
- cd .config/nvim
- nvim .
- U can use :Ex to open the default file explorer of vim
- shift+5 for creating a file inside explorer
- create init.lua
- print("Learing nvim") this prints in status bar every time you open neovim

## Status-bar commands

- `:Ex`       : Opens Explorer
- `:e file`   : open file
- `:w`        : save file
- `:q`        : quit
- `:qa`       : quit all
- `:q!`       : quit without saving changes
- `:wq`       : save + quit
- `:so`       : source file
- `:source %` : reload current file
- `:so <file>`: source (execute) a file
- `:e <file>` : open/edit file in current buffer
- `:<number>` : jump to that line number (absolute)

## Short-Cuts

### Normal Mode

- `V`           : visual line mode
- `v`           : visual character mode
- `y`           : yanks/copies the selected content
- `p`           : pastes
- `x`           : deletes the character

- `c`           : change
- `i`           : inside
- `ciw`         : change inner word
- `diw`         : delete inner word
- `yiw`         : yank inner word
- `ci"`         : change inside quotes
- `ci(`         : change inside parentheses
- `ci{`         : change inside braces

- `o`           : open new line below
- `O`           : open new line above
- `<number>j`   : move down \<number\> lines (relative)
- `<number>k`   : move up \<number\> lines (relative)
- `f<char>`     : move cursor to next occurrence of \<char\> in current line
- `w`           : move cursor to start of next word
- `cw`          : change word (delete word and enter insert mode)
- `h`           : move cursor left
- `j`           : move cursor down
- `k`           : move cursor up
- `l`           : move cursor right
- `=ap`         : auto-indent a paragraph

- `H`           : go to previous buffer (toggle tabs)
- `L`           : go to next buffer

> Switching windows
- `<C-w>h` : move to left window
- `<C-w>l` : move to right window
- `<C-w>j` : move to window below
- `<C-w>k` : move to window above

- `<C-\>`      : toggle terminal (horizontal split)   [normal mode]
- `<Esc>`      : exit terminal mode to normal mode

## File Explorer Commands (netrw)

- `%` : create file
- `d` : create directory
-

## Tips

- `%` : current buffer filename
- `so` is alias for `source`
