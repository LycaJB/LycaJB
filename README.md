<h1 align="center">
  <img src="LycaJBBanner.png" alt="LycaJB Banner" />
</h1>

<div align="center">

[Twitter][twitter]&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;[Original Project][original-project]


[![GitHub release][img-version-badge]][release] [![Issues][img-issues]][issues] [![PRs Welcome][prs-badge]][prs] [![Twitter][twitter-badge]][twitter-intent]

</div>


**LycaJB** is a project that aims to fill the gap in iOS 11.0 - 11.3.1 jailbreaks. While this jailbreak is specifically aimed at developers it could be turned into a public stable jailbreak which includes Cydia. Right now we had to make the hard decision to remove Cydia from LycaJB as it caused our test devices to bootloop. We are working hard to make this stable and ready for the public.

## Important Notices
* If **_YOU_** use this and **_YOU_** damage **_YOUR_** device, that is at nobody else's fault but **_YOUR OWN_**! We will **not** take the blame for damage done to your device. We have made it clear that it is a **_DEVELOPER ONLY_** Jailbreak


## Table of Contents

[**TL;DR**](#tldr)

[**Installation**](#installation)

[**Features**](#features)
  * [**Root Shells**](#root-shells)
  * [**Web Server**](#web-server)
  * [**Font Patcher**](#font-patcher)

[**Developer / Contributor**](#font-patcher)
  * [**Contributing**](#contributing)

**Additional Info**
  * [**Unstable Functions**](#unstable-functions)
  * [**License**](#license)


## TL;DR
  LycaJB is currently not stable enough for the average user's device. It is highly sought against a non-developer using it. While is it stable enough to be ran without issues, a few tweaks and you potentially have bootlooped your device.

### I'm not a developer though!

_If you..._

  * _Run this_, you are on your own! We told you not to!

## Features
* Root Shells
  * Netcat on port **4141**
  * Dropbear on port **22**
  * OpenSSH on port **2222** (Kinda works :sweat:) 
* Root Access iOS 11.0 - 11.3.1
* Full Read and Write to / on iOS 11.0 - 11.2.6
* Read and Write to /var on iOS 11.3 - 11.3.1
  * This is a work in progress and we are working hard to make this remount work!
* Web Server
  * on port **80**
  * located at `/var/www/html`


## Root Shells

:smiley: :heart_eyes: You can now use SSH on iOS, `ssh root@ip`, password `alpine`

### Netcat
> nc IP 4141

###### :mag: :bookmark_tabs: It won't show that it is connected, but once it goes to a new line wait 5 seconds and type `ls`

### Dropbear
> ssh root@IP
> password: alpine

###### :mag: :bookmark_tabs: Just like normal SSH except you may need to run /var/profile if it doesn't show your device name.

### OpenSSH
> ssh root@IP -p 2222

###### :mag: :bookmark_tabs: Yeah um, this one barely works. It works like 5% of the time. Sorry. :sweat:

## Web Server

- LycaJB's web server runs off the GCDWebServer module.
  - runs on port **80**
  - site location **`/var/www/html`**


## Installation

> Sorry, we don't provide an installation guide right now. It's **developers only**.


## Contributing

> Just make a pull request and state your changes! :smile:


## Unstable Functions

:warning: Warning: Some remount functions are **HIGHLY** unstable!
## License

[MIT](LICENSE) © LycaJB


[repo]:https://github.com/LycaJB/LycaJB
[twitter]:https://twitter.com/LycaJB
[issues]:https://github.com/LycaJB/LycaJB/issues
[twitter-intent]:https://twitter.com/intent/tweet?url=https%3A%2F%2Fgithub.com%2FLycaJB%2FLycaJB&via=LycaJB&text=LycaJB%20-%20iOS%2011.0%20-%2011.3.1%20W.I.P.%20jailbreak&hashtags=Jailbreak%20%23LycaJB%20%23github

[img-version-badge]:https://img.shields.io/github/release/LycaJB/LycaJB.svg?style=for-the-badge
[img-issues]:https://img.shields.io/github/issues/LycaJB/LycaJB.svg?style=for-the-badge
[prs-badge]: https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=for-the-badge&logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiPz48c3ZnIGlkPSJzdmcyIiB3aWR0aD0iNjQ1IiBoZWlnaHQ9IjU4NSIgdmVyc2lvbj0iMS4wIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciPiA8ZyBpZD0ibGF5ZXIxIj4gIDxwYXRoIGlkPSJwYXRoMjQxNyIgZD0ibTI5Ny4zIDU1MC44N2MtMTMuNzc1LTE1LjQzNi00OC4xNzEtNDUuNTMtNzYuNDM1LTY2Ljg3NC04My43NDQtNjMuMjQyLTk1LjE0Mi03Mi4zOTQtMTI5LjE0LTEwMy43LTYyLjY4NS01Ny43Mi04OS4zMDYtMTE1LjcxLTg5LjIxNC0xOTQuMzQgMC4wNDQ1MTItMzguMzg0IDIuNjYwOC01My4xNzIgMTMuNDEtNzUuNzk3IDE4LjIzNy0zOC4zODYgNDUuMS02Ni45MDkgNzkuNDQ1LTg0LjM1NSAyNC4zMjUtMTIuMzU2IDM2LjMyMy0xNy44NDUgNzYuOTQ0LTE4LjA3IDQyLjQ5My0wLjIzNDgzIDUxLjQzOSA0LjcxOTcgNzYuNDM1IDE4LjQ1MiAzMC40MjUgMTYuNzE0IDYxLjc0IDUyLjQzNiA2OC4yMTMgNzcuODExbDMuOTk4MSAxNS42NzIgOS44NTk2LTIxLjU4NWM1NS43MTYtMTIxLjk3IDIzMy42LTEyMC4xNSAyOTUuNSAzLjAzMTYgMTkuNjM4IDM5LjA3NiAyMS43OTQgMTIyLjUxIDQuMzgwMSAxNjkuNTEtMjIuNzE1IDYxLjMwOS02NS4zOCAxMDguMDUtMTY0LjAxIDE3OS42OC02NC42ODEgNDYuOTc0LTEzNy44OCAxMTguMDUtMTQyLjk4IDEyOC4wMy01LjkxNTUgMTEuNTg4LTAuMjgyMTYgMS44MTU5LTI2LjQwOC0yNy40NjF6IiBmaWxsPSIjZGQ1MDRmIi8%2BIDwvZz48L3N2Zz4%3D
[twitter-badge]:https://img.shields.io/twitter/url/http/shields.io.svg?style=for-the-badge&logo=twitter

[release]:https://github.com/LycaJB/LycaJB/releases/latest "Latest Release (external link) ➶"
[original-project]:https://github.com/Jakeajames/multi_path/ "Original Project (external link) ➶"
[prs]:http://makeapullrequest.com "Make a Pull Request (external link) ➶"

