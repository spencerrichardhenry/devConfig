Toolbox for flashing: https://github.com/qmk/qmk_toolbox
Repo for changing the configs (needed for flashing afaik!): https://github.com/zsa/qmk_firmware

Drop your changes really into any dir there, but I had it under keyboards/moonlander/keymaps. Then run `qmk config` cli command in that dir. Point toolbox to the bin file in root dir of repo, and flash!
