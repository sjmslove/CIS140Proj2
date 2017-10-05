mkdir sandbox
mkdir sandbox/css
mkdir sandbox/images
mkdir sandbox/scripts
cat > sandbox/index.html
ctr+d
# creates directory structure and file
cp /var/www/images/logo2.png sandbox/images
cp /var/www/images/logo1.png sandbox/images
# copies images from var to sandbox
chmod 744 sandbox
#changes security to all for root and read only for users
ls sandbox -Ral >sandbox/web-listing.txt
#creates file, inserts information and saves document
find /var/wwww/images -name "*.png" > sandbox/avail-images.txt
#creates file, inserts information and saves document

passwd
grep -n "sandbox" sandbox/web-listing.txt | sort > sandbox/listing.txt
