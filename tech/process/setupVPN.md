
* Click on Launch Instance.
* Select OpenVPN service from marketplace.
* Launch instance, 1GB ram & 8GB storage is sufficient.
* Create a new key-pair that would be used to ssh into the server.
* Download the .pem file and change the permission to `sudo chmod 0400 ravi-mac.pem`
* Run below command to enter into the server
`ssh -i "emperor100.pem" openvpnas@18.204.16.241`
* Set yes to below 
  ```bash
  Should client traffic be routed by default through the VPN?
  > Press ENTER for default [no]: yes

  Should client DNS traffic be routed by default through the VPN?
  > Press ENTER for default [no]: yes
  ```
* Goto [here](https://openvpn.net/vpn-server-resources/managing-user-and-group-properties-from-command-line/) and checkout the ways to add login user
* Goto [here](https://github.com/OpenVPN/openvpn3/issues/139) if VPN is not connecting on mac.
