touch -A '-900001' "bomb.txt"
stat bomb.txt | awk '{print $11}'
sh defuse.sh