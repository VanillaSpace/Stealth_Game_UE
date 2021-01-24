<h1 align="center">Grab n' Escape</h1>
  
<p align="center">
  <a href="#features">Features</a> |
  <a href="#installation">Installation</a> |
  <a href="#multiplayer">Multiplayer</a>
</p>

<p align="center">
  <img alt="Preview" width="860" alt="preview" src="https://user-images.githubusercontent.com/26191487/104862627-8966ff00-5901-11eb-9ad5-2ff5c3e1e379.gif">
<p align="center">

<p align="center">A simple multiplayer stealth game using C++ in Unreal Engine.</p>

---

# Installation

### ZIP File

1. Download the game file [HERE](https://www.dropbox.com/s/tyvwjheuqjcxgue/StealthGame_EXE.zip?dl=0).
2. Unzip the folder.
3. Run the EXE file -`FPSGame.exe`.

# Multiplayer

### Port Forwarding  

> To configure port forwarding, you need to access your router's interface through the web browser. [More Info](https://steamcommunity.com/linkfilter/?url=http://www.pcworld.com/article/244314/how_to_forward_ports_on_your_router.html).

1. Run the program `cmd` (Win key + R, then type cmd in the textbox).
2. Once inside the terminal, type `ipconfig`.
3. Write down the IP address of your default gateway. That should be `your router's IP`.
4. Also write down your own IP `(IPv4 Address)`.
5. Open the browser and type the IP.
6. Log into your router, and look for a tab or menu called “Applications & Gaming,” “Advanced,” “Port Forwarding/Port Triggering,” “NAT/QoS,” or something similar.
7. Setup a port forwarding for `UDP port 7777`. Don't forget to save/activate the port forwarding.

### In-game console commands

> Once port forwarding is ready the host have to set up your console comands in-game.

1. Once in-game, press the tilde key `~` to open the console commands.
2. The host will type in `open FirstPersonExample?listen`.
3. Then guest player, your friend, will type in `open THEIR IP:7777` in the command console.
4. There might be a chance that you are not able to connect to your friend or vice versa and that might be due to your router rules like certain routers have strict net rules preventing you from connecting

# Features

	- Game Objective is to Extract to an 'extraction zone'
	- AI Guard senses players and noises
	- First Person Weapon that can distract Guard AI (Shoot Projectiles at wall)
	- If AI is alerted its 'game over'.
	- Multiplayer ready.

# Credits
- [Udemy Course](https://www.udemy.com/user/tom-looman/)
