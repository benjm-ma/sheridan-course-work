/* Exercise 5
 *	Write a program to read a character in upper 
 * 	case and then print it in a lower case.
 */
#include <stdio.h>

 int main(){

 	char usrChar;
 	char invChar;

 	printf("Enter a character: ");
 	scanf("%c", &usrChar);

 	// to Upper or to Lower?
 	if( usrChar < 97 )
 		invChar= (int)usrChar+ 32;
 	else 
 		invChar= (int)usrChar- 32;

 	printf( "%c -> %c\n", usrChar, invChar );
 }

 /****TESTING****
 
----------- Test 1 ---------- 
$ for letter in {a..z}; do ./inverseCase.bin <<< $letter; done;

a -> A
b -> B
c -> C
d -> D
e -> E
f -> F
g -> G
h -> H
i -> I
j -> J
k -> K
l -> L
m -> M
n -> N
o -> O
p -> P
q -> Q
r -> R
s -> S
t -> T
u -> U
v -> V
w -> W
x -> X
y -> Y
z -> Z

----------- Test 2 ---------- 
$ for letter in {A..Z}; do ./inverseCase.bin <<< $letter; done;

A -> a
B -> b
C -> c
D -> d
E -> e
F -> f
G -> g
H -> h
I -> i
J -> j
K -> k
L -> l
M -> m
N -> n
O -> o
P -> p
Q -> q
R -> r
S -> s
T -> t
U -> u
V -> v
W -> w
X -> x
Y -> y
Z -> z

! program prompt has been omitted
*/