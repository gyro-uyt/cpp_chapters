" ==========================================
"   CLEAN + BEAUTIFUL CLASSIC VIM SETUP
" ==========================================

" --- Plugin manager setup ---
call plug#begin('~/.vim/plugged')

" Plugins go here:
Plug 'tpope/vim-commentary'

call plug#end()

" --- VSCode-style comment toggle ---
nnoremap <C-_> :Commentary<CR>
vnoremap <C-_> :Commentary<CR>


" ----- UI -----
set number              " Show line numbers
set norelativenumber
set nocursorline        " No highlight on current line
set laststatus=2        " Always show statusline
set showmode
set ruler
set background=dark     " For dark terminals
syntax on
set termguicolors       " Enable true color if terminal supports it

" ----- COLORS -----
try
    colorscheme torte  " Simple but elegant built-in theme
catch
    colorscheme default
endtry

" ----- INDENTATION -----
set tabstop=4
set shiftwidth=4
set expandtab
set smartindent

" ----- SEARCH -----
set incsearch
set ignorecase
set smartcase
set nohlsearch

" ----- MISC -----
set mouse=a
set clipboard=unnamedplus
set confirm
set noswapfile
set nobackup
set nowritebackup

" ----- CUSTOM STATUSLINE -----
" Format: full path | modified | line info | encoding | filetype | format
set statusline=%F%m%r%h%w\ [%l/%L]\ [%{&fileencoding}]\ [%y]

" %F → full path
" %m → modified flag (+)
" %r → readonly
" %l/%L → current line / total lines
" %y → filetype
" %fileencoding → UTF-8 etc.
" %fileformat → unix, dos etc.

hi StatusLine ctermfg=White ctermbg=DarkBlue
hi StatusLineNC ctermfg=Gray ctermbg=Black

