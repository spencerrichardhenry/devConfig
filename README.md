# devConfig

## Alacritty
Place the config file into ~/.alacritty.yml

If you want to connect alacritty to tmux, uncomment the bottom stanza.

URL Recognition is set up so that you can click on a URL and open it in a browser, see the hints stanza

## Windows
### Disabling the "windows key" (hyper key) office shortcut
https://windowsreport.com/disable-keyboard-shortcuts-windows-8/
Basically...
run win+r -> Gpedit.msc
Administrative Templates
Double click "Windows Components" -> "File Explorer"
Scroll to bottom, dbl click on "Turns off Windows key hotkeys"
Disable, Apply, ok, restart computer 
