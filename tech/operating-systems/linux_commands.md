
### Linux commands

```shell

# During Setup

npm install/npm ci
composer install
npm run gulp

# Clear cache in local
echo 'flush_all' | nc localhost 11211;

# SQLMAP SQLi check
sqlmap -u 'https://www.codechef.com/api/list/contests/all?sort_by=END&sorting_order=desc&offset=0' --flush-session --dbms=mysql --technique=B -p sorting_order --level 2 --tamper=between

# SALT cmd

sudo salt 'ide*' cmd.run 'sudo pkill -9 "s3fs" && cd /var/www/codechef/current && sudo php scripts/check_s3fs.php'
sudo fusermount -u /mnt/codechef_private && sudo fusermount -u /mnt/codechef_shared && sudo php /mnt/codechef.php
## After merging the SALT PR run below command to update the salt file
sudo su
/bin/bash /root/salt-sync.sh
sudo salt 'web*' cmd.run 'salt-call state.highstate'
sudo salt 'web*' cmd.run 'sudo service nginx restart'

## Deploy on all the servers during the contest
# Check version on each server:
sudo salt 'web*' cmd.run 'cat /var/www/codechef/current/version'

# Deploy latest version on each server:
sudo salt 'web*' cmd.run '/etc/deploy_scripts/trigger_build.sh'

# During manual deploy, parameter store is updated first. So you can just start manual deploy and then run the above command on ops.


## Grant permissions on a folder

chmod u+w sites/default/settings.php
chmod u+w sites/default/

# Exec moss on local

scripts/./moss -l cc -d <dir_name>

# Clear all local branches

git branch | grep -v "master" | xargs git branch -D

# AWS Copy cmd to transfer from one bucket to another

aws s3 cp --recursive s3://codechef_shared/images/certifications/ s3://cdn-bucket-public/images/certifications/

# Running Selenium grid `command`

java -Dwebdriver.chrome.driver=/usr/local/bin/chromedriver -jar /usr/local/bin/selenium-server-standalone-3.141.59.jar
contest.php

npm init &&
npm install --save selenium-webdriver chromedriver geckodriver

# File listing `command`

ls -laSh; # Sort based on the size

# Generate rsa public key

ssh-keygen -t rsa
pbcopy < ~/.ssh/id_rsa.pub
# The key has to be stored inside
/etc/.ssh/authenticated_keys

# Find and replace
sed -i 's/from-text/to-text/g'

# Write a protected command

:w !sudo tee %

# The chkconfig command can also be used to activate and deactivate services.

chkconfig --list

# Find running apps on PORT

sudo lsof -i -P -n | grep LISTEN

# Extend EBS storage with same i-nodes

df -i
sudo resize2fs /dev/nvme0n1p1

# Increase EBS size of current disk:
# https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recognize-expanded-volume-linux.html
sudo lsblk
sudo growpart /dev/nvme0n1 1
# XFS
sudo xfs_growfs -d /path
OR
sudo xfs_growfs /dev/nvme0n1p1

# EXT4
sudo resize2fs /dev/nvme0n1p1



# Change the file permission
sudo chown jenkins:jenkins -R /var/lib/jenkins/capistrano/<your_repository_name>

# Change the password of a http nginx user
sudo htpasswd /etc/nginx/.htpasswd <username>

#  NGROK to localhost

#download ngrok from
#https://bin.equinox.io/c/4VmDzA7iaHb/ngrok-stable-linux-amd64.zip
#unzip ngrok-stable-linux-amd64.zip

./ngrok http -host-header=www.acodechef.com 80
# Find the number of lines in each file with name inside a directory
# https://unix.stackexchange.com/questions/260630/how-do-you-list-number-of-lines-of-every-file-in-a-directory-in-human-readable-f

wc -l `find /path/to/directory/ -type f`

# GITHUB delete tag
git push origin :refs/tags/3.15

#ZIP folder
# https://devconnected.com/how-to-zip-folder-on-linux/

zip -r <output_file> <folder_1> <folder_2> ... <folder_n>

# ssh to OPENVPN
ssh openvpnas@3.214.204.205 -o StrictHostKeyChecking=no

# SSH issue in Ventura
vim /etc/ssh/ssh_config
Host *
HostkeyAlgorithms +ssh-rsa
PubkeyAcceptedAlgorithms +ssh-rsa

:w !sudo tee %


# Add basic auth in nginx
sudo sh -c "echo -n '<username>:' >> /etc/nginx/.htpasswd"
sudo sh -c "openssl passwd -apr1 >> /etc/nginx/.htpasswd" # Now enter the password


# Geeks for Geeks remove login bar

# execute these on console
$('body').css({"overflow": "auto", "position" : "absolute"});
window.onscroll = {};
$('.login-modal-div').remove();

# Backup data to EC2, web102.

cd ~/codechef/codechef/sites/all/modules && cp ~/codechef/codechef/.env ~/codechef/codechef/sites/all/modules/ravi_module_test/env.bck && cp ~/.zshrc ~/codechef/codechef/sites/all/modules/ravi_module_test/zshrc.bck && zip -r ravi_module_test.zip ravi_module_test && scp ravi_module_test.zip ravikant@52.7.66.88:/home/ravikant/ && rm ravi_module_test.zip

# Local Tunnel (Used to expose local environment to internet)
npm install -g localtunnel
lt --port 80 --local-host www.acodechef.com --subdomain acodechef --print-requests

# Restart php-fpm & nutcraker on all servers

salt 'web*' cmd.run 'service php-fpm stop'
salt 'web*' cmd.run 'service nutcracker restart'
salt 'web*' cmd.run 'service php-fpm start'


# Run Rankings Code 
php /var/www/rankings/current/update_rankings.php --service CodeChef -delay 1000

# Generate random SSL Certificate

apt install openssl

openssl genrsa -out <name>.key 2048

openssl req -x509 -new -key <name>.key -out <cacert>.pem -days 365

# Kill queries running for more that 20 seconds

out1=$(mysql -ucodechef -p<passowrd> -hccdbinstance.c7teckpg2ocf.us-east-1.rds.amazonaws.com --disable-column-names  -e "select concat('KILL ',id,';') from information_schema.processlist where user = 'codechef' and time > 20;")

out2=$(mysql -ucodechef -p<passowrd> -hccdbinstance.c7teckpg2ocf.us-east-1.rds.amazonaws.com --disable-column-names  -e "$out1")

## Transfer file faster from S3 to local

Checkout https://github.com/peak/s5cmd

s5cmd --credentials-file ~/.your-credentials-file cp 's3://codechef_private/solutions/*' ./your-local-directory
Make sure you use server with large number of cores


# TESTING PART
```
