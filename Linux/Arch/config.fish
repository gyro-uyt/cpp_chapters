if status is-interactive
    set -g fish_greeting ""
    set -Ux TERM xterm-256color
    
    # Set default editor
    set -Ux EDITOR vim

    # Add some useful paths
    set -Ux PATH $PATH ~/.local/bin ~/.cargo/bin /usr/local/bin

    # Alias section
    alias ls="ls --color=auto"
    alias ll="ls -lh"
    alias la="ls -lha"
    alias ..="cd .."
    alias update="sudo pacman -Syu"
    alias cat="bat"  # if you install bat
    alias grep="grep --color=auto"

end
