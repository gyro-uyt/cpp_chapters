# NeoVim

## Installation

- Make a backup of your current Neovim files:

```bash
# required
mv ~/.config/nvim{,.bak}

# optional but recommended
mv ~/.local/share/nvim{,.bak}
mv ~/.local/state/nvim{,.bak}
mv ~/.cache/nvim{,.bak}
```

- Clone the starter

```bash
git clone https://github.com/LazyVim/starter ~/.config/nvim
```

- Remove the .git folder, so you can add it to your own repo later

```bash
rm -rf ~/.config/nvim/.git
```

- Start Neovim!

```bash
nvim
```

## ShortCuts

1. ggVG &rarr; gg goes to top & VG selects all tect from top to bottom
2. :wq &rarr; write & quits the current file

## CustomiZations

Go to config directory

```bash
cd ~/.config/nvim
```

### 1. Copy to Clipboard (Spacebar + Y)

Run this

```bash
cd ~/.config/nvim/lua
mkdir custom
cd custom
nvim config.lua
```

WQ this

```lua
-- Use system clipboard for all yank, delete, change and put operations
vim.opt.clipboard = "unnamedplus"

-- Copy entire file to system clipboard
vim.api.nvim_set_keymap("n", "<leader>y", 'ggVG"+y', { noremap = true, silent = true })
```

### 2. Add C++ support


WQ in ~/.config/nvim/lua/plugins/conform.lua

```lua
return {
  "stevearc/conform.nvim",
  opts = {
    formatters_by_ft = {
      cpp = { "clang_format" },
      c = { "clang_format" },
    },
  },
}
```

WQ in /plugins/treesitter.lua

```lua
return {
  "nvim-treesitter/nvim-treesitter",
  opts = {
    ensure_installed = {
      "lua",
      "python",
      "java",
      "cpp", -- ✅ add this
      "c", -- (optional) C support
    },
  },
}
```

WQ in /plugins/lsp.lua

```lua
return {
  "neovim/nvim-lspconfig",
  opts = {
    servers = {
      clangd = {
        -- Example config, you can tweak if needed
        cmd = { "clangd", "--background-index" },
      },
    },
  },
}
```

### 3. Cutomise Lua Line

WQ in /plugins/lualine.lua

```lua
return {
  "nvim-lualine/lualine.nvim",
  opts = {
    sections = {
      lualine_c = {
        {
          "filename",
          path = 1, -- 0 = filename only, 1 = relative path, 2 = absolute
          symbols = {
            modified = " ●", -- show dot when unsaved
            readonly = " 🔒",
            unnamed = "[No Name]",
          },
          -- Keep filename red when modified
          color = function()
            if vim.bo.modified then
              return { fg = "#ff5555", gui = "bold" } -- red text
            else
              return {} -- default color
            end
          end,
        },
      },
    },
  },
}
```
