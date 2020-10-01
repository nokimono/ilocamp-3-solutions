# Usage: bash judge.sh
# Basic checker to compare between brute-force solution and efficient one
# You can also use other test generators, but python is the default
for((i=1;i>=0;i++));
do
python3 gen.py > test.in;
./brut < test.in > brut.out;
./rozwiazanie < test.in > rozwiazanie.out;
diff brut.out rozwiazanie.out || break;
echo $i;
done