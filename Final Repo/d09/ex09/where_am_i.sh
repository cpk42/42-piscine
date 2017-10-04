ip=$(ifconfig | grep 'inet ' | cut -d' ' -f2)
if test -z "$ip"
then
	echo "Je suis perdu!"
else
	echo $ip | tr ' ' '\n'
fi
