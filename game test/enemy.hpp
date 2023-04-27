#include <iostream>
using namespace std;

class Enemy{
private:
int Health;
int Damage;
public:
    
    Enemy(int damage,int health) {
        Health = 100;
        Damage = damage;
    }
    
   // void Damage(int Amount, DAMAGETYPE type) {
   //     
   //     if (type == NORMAL){
   //         Health -= Health - 1;
   //     }
   //     
   // }
    
    int getHealth() {
        return Health;
    }
    void setHealth(int x){
        Health += x;
    }
    int getDamage() {
        return Damage;
    }
    void setDamage(int x){
        Damage += x;
    }
    void pepper() {
        string pep = R"(ddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
ddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxkxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
ddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxkxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
dddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxkkxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
oddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxkxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
odddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxkxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkkkkkkkkkkk
oddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkOkkkkkOOOOOOOOOOOOOOOOkkkkkkOOOOkkkkkkkkkkkkkkkkk
oddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxdddddddddddddddddddddddddddddxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkOOOOOOOkkkkkkkkkkkkkkk
oddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxddddooooooooooodddddddddddddddddddddddddddddddxxxxxkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkOOOOOOOOOOOOkkOOkkkkkkkk
oddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkxxxxddooooooooooooooddddddddxxxxxxxddddddxxxxxxxxdddddddddddxxxkkkkkOOOkkkkOOOOOOOOOOOOOOOOOOOOOOOOOOkOOOOOOOOOOOOOOOOOOOOOOOkkkkkkk
odddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkxxddooolloooooooodddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddxxxkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkk
odddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkxxxdoolllllooooddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxdddddddddxxxkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkk
ooddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkxxddollllllloooodddddxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkxxxxxxxxxxxxxdddddddxxkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkk
ooddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxkxkkkkkkkkxxxddoolllllloooooddddxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxxxxxddddddddxkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOk
ooodddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxkkxkkkkkxxxdoolllllloooodddddxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxxxxddddddddxkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
oooddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxkkxxxxxxxdolllllllooooddddxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxxxddddddddxkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
oooodddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddolllllllooodddddxxxxxxxxxxxxxxkkkkkkkkkkkkkkkkkOOOOOOOOOOOkOOkkkkkkkkkkkkkkkkxxxxxxxxxddddddddxkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
oooooooddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxddollllllooooddddxxxxxxxxxxxxxxxkkkkkkkkkkkkOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkkxxxxxxddddddddxkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
oooooooodddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxddolllllooooodddddxxxxxxxxxxxkkkkkkkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkxxxxxxxxxdddddddxkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
oooooooooddddddddddddddddddxxxxxxxxxxxxxxxxxxxdolllllooooodddddxxxxxxxxkkkkkkkkkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkxxxxxxxxdddddddxxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
oooooooooodddddddddddddddddxxxxxxxxxxxxxxxxxdoollllloooooddddxxxxxxxxkkkkkkkkkkkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkxxxxxxxxdddddddxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
looooooooooddddddddddddddddddxxxxxxxxxxxxxddollllloooooddddxxxxxxxkkkkkkkkkkkkkkkOOOOOOOOOOOOOOOOOOOOO00OOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkkkkkxxxxxxxddddoodxkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
llooooooooodddddddddddddddddddddxxxxxxxxxdoolllloooooddddxxxxxxxxxkkkkkkkkkkkkOOOOOOOOOOOOOOOOOO000000000000OOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkkxxxxxxxddooodxkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
llooooooooooodddddddddddddddddddxxxxxxxddoolllooooodddddxxxxxxxxxkkkkkkkkkkOOOOOOOOOO000000OOOO000000000000000OOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkxxxxxdddoooddxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
;;;::::cloooooddddddddddddddddddxxxxxxddollloooooddddddxxxxxxxxxkkkkkkkkkkkOOOOOOOO00000000OO0000000000000000OOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkxxxxxxddoooodxkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
.......':looooooddddddddddddddddxxxxxdollllloooodddddxxxxxxxxxxkkkkkkkkkOOOOOO000000000000000000000000000000000OOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkxxxxddddoooodkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
'''.....;loooooodddddddddddddddddxxddollllloooodddddxxxxxxxxxxkkkkkkkkkOOOOOO0000000000000000000000000000000000000000000OOOOOOOOOOOOOOOOOOOOkkkkkkkxxxxxddddooooxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
::;,....;looooooooooddddddddddddddddolllloooooddddddxxxxxxxxkkkkkkkkkOOOOOOOOOOOOOO0000000000000000000000000000000000000OOOOOOOOOOOOOOOOOOOOkkkkkkkkxxxxddddoooodxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
;;;;'...;looooooooooddddddddddddddoollllloooodddddddxxxxxxkkkkkkkkkkOOOOOOOOOOOOOO0000000000000000000000000OOOOOOOOO00OOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkxxxddddoooodxOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
;;;;'...;loooooooooddddddddddddddolllllloooodddddddxxxxxxxkkkkkkkkOOOOOOOOOOOOOOOO00000000000000000000000000OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkxxxxdddoooooxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
;;;;'...;cllloooooooooooooddddddolcclllooooodddddxxxxxxxxxkkkkkkkkOOOOOOOOOOOOOOOO0000000000000000000000000000000000000OOOOOOOOOOOOOOOOOOOOOOOOkkkkkkxxxxxdddooooodxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
,,,,.. .;clllllllllloooooodddddolccllloooooddddddxxxxxxxxkkkkkkkkkkkOOOOOOOOOOOOO0000000000000000000000000000000000000000O000OOOOOOOOOOOOOOOOOOkkkkkkxxxxxddddooooodkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
.....  .,cllllllllllooooooddddoolccllloooodddddddxxxxxxkkkkkkkkkkkkkkOOOOOOOOOOO0000000000000000000000000000000000000000000000OOOOOOOOOOOOOOOOkkkkkkkxxxxxdddddoooooxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
....   .,clllllllllllllloooooolllllllloooodddddddxxxxxxkkkkkkkkkkkkkkkOOOOOOOOOO0000000000000000000000000000000000000000000000OOOOOOOOOOOOOOOOkkkkkkkxxxxxdddddoollodkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
...    .,:clllllllccllllooooollllllllooooodddddddxxxxxxxkkkkkkkkkkkOkkOOOOOOOOOOO00000000000000000000000000000000000000000000OOOOOOOOOOOOOOOOOkkkkkkkxxxxxdddddoollldxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
      ..,:clllllccccclloooooollccllllooooodddddddxxxxxxxkkkkkkkkkkkOOOOOOOOOOOOOOOO000000000000000000000000000000000000000O00OOOOOOOOOOOOOOOOOkkkkkkxxxxxxdddddoollloxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
.     ..,:cccccc:;,,;:cccllllccccclllooooodddddddxxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkOOOO000000000000000000000000000000000000OO0OOOOOOOOOOOOOOOOkkkkkkkxxxxxxdddddoolllldkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
'..   ..;:ccccc:;,'''',,,;;:::cccclllooooodddddddxxxxxxkkkkkkkkkkkkxxxxxxddddddooddxxkkkOOOO0OOOO0000000000000000000000000000OOOOOOOOOOOkkxxxxxxxxxxxxxxxdddddooolllloxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
c;.. ..,:clllllcc::;;;;;;;;;;:cccclllooooodddddddxxxxxxkkkkkkkkkxxddoollllccc::;;;::cclooddxkkkxkOOO0OOOO0000000000000000000OOOOOOkkkxxdoollllllllooddddddddddooolllloxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
lc,...,:lllloooooollllllllllcccccclllooooooddddddxxxxxxxkkkkxxddolllc:;;;,,,,,''''',,,;;:clloddodxkOOOOOOOO0000000000000OOOOOOkkkxxdolcc:;;,,,,,,,;;::ccclooooooollccldkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
lc;'',cllllooooooooooooooodoollcccllloooooooddddddxxxxxxxxxxdolc:::;,,'''''''''''''''',,;:ccccllodxkkkkkOOOO0000000000OOOOOOkkxxdool::;,,''...........',,;:cllooollccldxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
lc;,,:clllloooooooooooooodddollccclllooooooooodddddxxxxxxddolc:;;;;;;,;;;;;;;,,,,,,'',,,,;;:cccloodxkkkkkOOO000000OOOOOOOOOkkxdollc:;,,''.................',;:ccllcccloxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
c:,,;:llllooooooooooooooodddollccclllooooooooodddddxxxddoolc:::::ccllloooooooollcc::;;;::::cclllllodxxkkkOOOOOOOOOOOOOOOOOkkxdolcc:;;,,''''''',,,,,;;;,,,''''',;:cc:ccoxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
;,',;cllloooooooooooooooddddollccllllooooooooddddddxddolcc:::cllooddxxxkkkkkkkkxxxdoooloooooooooooodxxxkkkOOOO0OOOOOOOOOkkkxdolccc:::;;;;;;::clllooooollc:;,'...,;:::coxkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
;;;;:cllooooooooooooooodddddollcccllllooooooooddddddolccccclloddxxxkkkkkkkOOOOOkkkkxxxxxxxxxxxxxdddxxxxkkkOO0000OOOOOOkkkxxxdollllllllllloodddxxxxxxxxdddolc;,'.'',,;:ldkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
clcccllooooooooooooooooodddoollccclllllooooooooddddolccccloodxxxkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxxkkkkOOO00000OOOOOkkkxxddoolooooodddddxxxxxxxxxxxxxdddolc:;,''',,:ldkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
lllllllooooooooooooooooodddoolllclllllloooooooodddolllllodddxxxkkkkkxxxxxxxxxxxxkxxxxxxkkkkkkkxxxxxxkkkkOOO000000OOOOkkkxxddooooooddddddddxxxxxxxxxxxxxdddoollc;,,'',:ldkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
llllllooooooooooooooooooooooollllccllllloooooooddoollooddxxxxxxxxxxxxxxxxxxxxkkkkkkxxxxxxxxxxxxxxxxxkkkkOOO000000OOOOkkxxdoooooooodddddddxxxxxxxxxxxdddooooollc:;,'',;cdkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
llllllooooooooooooollloooooolllllcccclllooooddodooooodddxxxxxxxddddddddddddddxxxxxxxxxxdddxxxxxxxxxxxxkkkOOO00000OOOkkxddollllooooooddxxkkkxxxxxxxxddooooooollcc:;,'';cdkOOOkkkkkkOOOOOOOOOOOOOOOOOOOOOO
cllllloooooooollllllllllllllllllllcccclllooooodoooodddxxxxxxxdddooolllcc:::::ccccclloddddddddxxxxxxxxxxkkkOO00000OOOkxxoolllllooooooddddddoolollllllllccccllllccc:,'',cdkOOOkkkkkkOOOkOOOOOOOOOOOOOOOOOO
:cccllllooooollccllllooolllllloolllccccclloooodddddddxxxxxxddoolcc:;;;;,'''';::,,,;:cloodddddxxxxxxxxxxxkkkOO0000OOOkxdolllllloooodoocc::c:;,,,;::;;,,,;;::cccccc:;,,,:oxkOOkkkkkkkkkkOOOOOOkkOOOOOOOOOO
'',;:ccllooollcccccllllooooooooooollcccccloooodddddxxxxxxdoolc:;,'',;:c:,'',col;,,;ldddooodddxxkkkxxxxxxxkkOO0000OOOkxdolcllooooooool:;,:ll:,',;cll:;'...',;;::cc:;;;;:oxkkkxxxxxxkkkkkkOOOkkkkkOOOOkOOO
....',:ccllcccllllllclllloodddddddolc::cclooooddddxxxxdddol:;,'...,:lodl;,',:c:;;;cdkOkxxddddxkOOkkxxxxxxkkOOO000OOOkxdollloodooooxxdl:;;::;,,,:lddoc;,.....';::c:::::cldddddoooooodxkkkkkOOkkkOOOOkkkOk
...',;:cccccclllooooooolllooddxxdddol::ccloooddddxxxxxddolc:,''',,;:lodoc;,,;;;,;coxkkkkxxxxxkkkOkkkkxxxxkkOOOOOOOOOkkxolllooddoodxkxoc::;,,,;:coddoc:,,'...';:ccc:::::clodddoolcccloddxxkkkkkkOOOOOkkkk
:::clooooolllooooooooooooooodddddddolc::cloooodddxxxxxddoollccccccccllooolccccccloddxxdxxxxkkkkkkkkkkxxxxkkOOOOOOOOOOkxdollloodxxxxxxxdolcc::clooooc:;;;,,'',:cccc:::::coodoolcc::::::clodxkkkkOOOkkxxxx
lccccccccllllooooodoolllodddddoodddoolcccloooddddxxxxxxxddddddddddddddddddooodooddddddxxxkkkkkkkkkkxxxxxxkkkOOOOOOOOkkxdoolloodxxxxxxxxddoolllllllccc::::;;::cclcc::::cloolcc:::::;,,'',;:oxkkkkxdolc:;;
;,,'......';cloooodoolllodxxxdooooooolccclooddddxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddxxxxxxxkkkkkkkkkxxxxxxxxkkkOOOOOOkkkkxdoollooodxxxxxxxddddooooooooolllllccclllllcc::::cccc:ccllc;,'.....';cllc:;,,''''.
.....     .':llooooolllloddddddoolooolc:clooodddxxxxxxxxxkkkkkkkkkkkxxxxxxxxxxxxxxkkkkkkkkkkkkkkkxxxxxxxxkkkkkOOkkkkkkxdoolloooddxxxxxxxxxdddddddddddddooooolllllcc::::ccc:clooool:,.......','..........
...       ..,cloooollcloodddddddollllc::clooooddxxxxxxxkkkkkkOOOOOOkkkkkkkkkkkkkkkkkOOkkkkkkkkkkxxxxxxxxxxkkkkkkkkkkkxxdoollloodddxxxxxxxxxxxxxxxxxxxxxxddddoolllcc:::cccc:cloddxddl:,..................
..        ..':llollllloodddddddddoollc::clooooddxxxxxxxkkkkkOOOOOOOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkxxxxxxxxxxxxkkkkkkxxxxddoolllloodddxxxxxxxxxxxxxxxxxxxxxxxdddoollcccccccc::ccloxxdol:,'.........   .....
.         ...;cllllloodddddddddxxddolc::cllooodddxxxxxkkkkkkkkOOkkkkkkkkkkkkkkkkkOOOOOOkkkkkkkkkxxxxxxxxxxxxxkkkkxxxxxddoollllooddddxxxxxxxxxxxxxxxxxxxxxxxddoollcccccccccccccoddoc;,'.........     ....
..        ...,cllllooddddddddxxxxxddoc::clloooddxxxxxxkkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOkkkkkkkkkxxxxddddxxxxkkkkkkkkkxxddoollllooodddxxxxxxxxxxxxxxxxxxxxxxxdddoolcccccccccllccloddoc;,'..........   ....
......   . ...;cllooddddddddxxxkxxxdolc:clloooddxxxxxxkkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOOOkkkkkkxxddddddxxxxkkkkkkkkkkxxddolllllooddxxxxxxxxxxxxxxxxxxxxxxxxdddoolcccccc:cllc::codddl;'......',,,'.......
......       .':looddddddddxxxkkkxxxdlccclloooddxxxxxxkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOOOOOOOOkxxdddddddxxxkkkkkkkkkkkxxxdoollllooddxxxxxxxxxxxxxxxxxxxxxxxddddoolccccc::cllc:;:lodo:,....''',;:::;'',,,,
......        .,coodddddddddxxxxxxxddoccclloooddxxxxxxxkkkkkkkkkkkkOOOOOOOOOOOOOOOOOOO00OOOOkkxdddddddxxxkkkkkkOOOkkkkxxxddollllodxxxxxkkkkkkxxxxxxxxxxxxxddddoolcccc::::ccc:;:cll:,....'',;:clllc::cll:
.......       ..;cooddddddddxxxxxxxddllccllooodddxxxxxxkkkkkkkkkkkOOOOOOOOOOOOOOOOO000000OOOkxddddddxxxkkkkkOOOOOOOOkkkxxxdoolcllddxxxkkkkkkkkkxxxxxxxxxxxdddooolccc:;,;::c:;,;::;'....',;;:cloooolcllc;
....  ..       ..;looddddddddddddddddolccllooodddxxxxxxkkkkkkkkkkOOOOOOOOOOOOO000OOOOOOOOOkkxddddddxxxkkkkkOOO000OOOOkkkxxddollclodxkkkkkkkkkkkkkkkkkxxxxddddoollcc:;,,;;::;,'',,....''';:cclooodoolc;'.
      .         .';coodddddddddddddddolcccloodddddxxxxkkkkkkkOOOOOOOOOOO00000000OOOOOOOOkkxxdddddxxxxkkkkOOOO00000OOOkkkxxddoolllodxkkkkkOkkkkkkkkkkkkxxxxdddoollc:;,,,;;;;,'.......'',;:cclloooooolc,..
                ..';coodddddddddxxxxxdoccclooddddddxxxkkkkkkOOOOOOO0000000000000OOOOOkkkkxxdddddxxxxxkkkkkOOOO0000OOOkkxxdddollllodxkkOOOOOkkkkkkkkkkkxxxxdddoollc:,',;;;;;,'......'',;::::cccclllllc;'.
                  ..':lodddddddxxxxxxdolcclooddddddxxxkkkkkkOOOOOO000000000000OOOOOkkkkkkxxxxxxxxxxxxxxxkkkkOOOOOOOOkkxxddooolllllodxkOOOOOOkkkkkkkkkxxxxdddooolcc;,',;;;;;;,,,;;;;:::c:;,,;;;;;::::;,''
                    ..;codddddxxxxxdddolccloodddddxxxxkkkkkOOOOOOOOO000000000OOOkkkkkkkkkkxxxxxxxxxxxxxxxxxkkkkkkOkkkxddooooolllllodxkOOOOOOOkkkkkkkkxxxxdddoollc:;',;::::;;;;clllllllc:,,'',,,,;;;;,''.
                      .';codddxxxddddddllllooddddxxxxxkkkkkOOOOOOOOO0000000OOOOkkkkkkkkkkkxdddddddoooooooddxxxkkkkkxxddollllllllllodxkOOOOOOOkkkkkkkkxxxdddooollc:,',;:c:;;;:cllooolllc;,''''''',,,,''..
                        .':lddddddxxxxdolllooddddxxxxxkkkkkOOOOOOOOO000OOOOOOkkkkkkkkkkkkkxddooolllllccccloddxxxxxxddolcccclllllllodxkOOOOOOOkkkkkkkkxxxdddooollc:,'';:c:;;;:looooollcc;,'''''''',,''...
                         ..;ldddxxxxkxxolllooddddxxxxxkkkkkkOOOOOOOOOOOOOkkkkkxxxkkkkkkkkkxddooooooodooollloodddddoollc::ccllllllodxkkOOOOOOOkkkkkkkkxxxdddoollcc;,'',,;,,;:clooolllcc:;,''''''''','....
                          ..,coddxxxxxdlclloodddxxxxxxxkkkkkOOOOOOOOOOOkkkkxxxxxkkkkkkkkkkkxxddddddddddddddoooooolllcc:::ccllloooddxkkkOOOOOOkkkkkkkxxxdddoolllcc:,'....',;clllllllcc::,''......''''....
...                         ..,:looool:;:clooddddxxxxxxxkkkkkkOOOOOOOkkxxxxxxxxkkkkkkkkkkkkkxxxxxddddddddddddoooollllcccclloooooddxxxkkkkkOOkkkkkkkxxxxddooolllcc;'......';:clllllllc:;,'........'''....
...           ..             ...'',,''..,cloodddxxxxxxxxxkkkkkkkkkkkxxxddddxxxkkkkkkkkkkkkkkkkkkxxxxxxxxxxxdddddooooollloooodddddddxxxkkkkkkkkkkkkxxxddddooollcc:,.....',;:cllllcc:;;,''.........''.....
...           ..                 .......':loddddxxxxxxxxxxxkkkkkkxxddddddxxxxkkkkkkkkkxxxxkkkkkkkkkkkkkkkxxxxxxxddddddddoodddddddddddxxxxkkkkkkkkxxxxdddooolllcc;'....';:lllc:;,'.......................
..       ..                       ...  ..;loodddxxxxxxxxxxxxxxxxxdddddxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkxxxxxxxxxxxddddddooddddddddddxxxkkkkkxxxddddoooolllc:;'..',;:ll:,.....      .................
       ........                   .... ..;clodddxxxxxxxxxxxxxxxxddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkxxxxxxxxxxxxxdddddoooddddoooooddxxxkxxxxdddooooollllc:,''',,;:c:,.............................
        .......    .....         ........,clooddxxxxxxxxxxxxxxxddddxxxxxddddddddddddddxxxxxxxxxxxxkkkkxxxxxxxxxxxxxxxxxdddddoooooooooooooodxxxxxddddoooooollllc;'.....';;,'.............................
.                  ...................  ..:looddxxxxxxkkxxdxxkxdddxxxxddoolllooooddddddddxxxxxxxxxkxxxxxxxxxxxxxxxxxxxddddddoooooooooooooodddddddddooooooolllc:,...   .........'''''''..................
.                    ...........        ..,coodddxxxxxkkkxxxxkkxddxxxxddoolllllcllllooooddddxxxxxxxxxxxxxxkkkxxxxxxxxxddddooooooolllllllooodoodddddoooooollllc:,'..           ..........................
'.      .... ......    .......           ..;loodddxxxxkkkkxxxkkkxdxxxxxdddddooolllllllllooooooodddddddddddxxxdddddddddddooooooolllllllllooddoooddddoooooolllcc::;;,'...            .......'.............
,'.    ..............      ..             .':loddddxxxxkkxxxxxkkkxxxxxxxxxxddddddooollllooooooooooooooooooddoooooooooooollllllccc::::::clloddddddddoollllllcc::;;;;;;,.........        ......    ....  .
...     ...............                   .':llodddddxxkkkxxxxkkkkxxxxxxxxxxxxdddddddooooooooddddddddddddddoooooddooooooolllccc::::::::cclooodddddoollllllcc:;;;;:::;,.. ...........   ....      .......
         .................                .':clloddddxxxkxxxxxxxkkkxxkxxxxxxxxxxxddddddddddddddddxxkkkkkxxxxxxxxxxxdddooooolllcccccllllllooddddddoollllllc:;,,,,;;;;;,..    .........            .......
            .............                ..,clllloodddxxxxxxxxxxxxkxkkxxxxxxxxxxxxdddddddddddddddxxxkkkkkxxxxxxxxxxdddoooooolllllllooooooodddddddollllllc:;''....',,,'..                       .........
                     .....               ..;clllllooodddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddxxxxxxxxddxxxxxdddddooooooooooooooddooodddddddoollcccc:,........'''''...                     .........
                      .....              .':lloolllloooddxxxxxxxddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxdddddddddddddddddddddddddooddddddddddddddddolllcccc;'..............''.....                  ....... 
                                        ..,:looooollllooddddxxxddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddddddddddddddddddddddddddddddoooolllllcc:;'...   ............''''..             ...    ..  
                                     .  ..;cloodddoolllooddddddddddddddddddxxxxxxxxxxxxkkkkkxxxxxxxxxddddddddddddddddddddddddddddddddddoooolllcccccc:,'..............    ......        ....  ..         
                                    .....':lloodddddoollloodddddddddddddddddxxxxxxkxxkkkkkkkkxxxxxxxxdddddddddddddddddddddddddddddddddoollllcccccc:;,'''',,,''''''.......                               
                                    .....,:llooddddddooolloooddddddddddddddddxxxxxxxxkkkkkkkkkxxxxxxxxddddddddddddddddddddxxxddddddddoollccccccc::;,,,,,,,,,,,,;;;;,,,,'...                             
........                            ....':cloooddddddddoolloooodddddddddddddddxxxxxxxxkkkkkkkkxxxxxxxxxxdddddddddddddddddddddddddddoooolcccc::::;;,,,,,,''''''',,,,,,,'....                             
'''''.....                          ....,clloodddddddddddooooooooddddddoddddddddxxxxxxxxkkkkkkkxxxxxxxxxxxxxxxddddddddddddddddddooooollccc::::;,''''''''''''''''','''........                           
..........                        ...'',:cloooddddddddddddooooooooodddooodddddddxxxxxxxxkkkkkkkkxxxxxxxxxxxxxxxxxdddddddddddddddoooollccc::::;,...............'''...............                        
    ....                         ..',,;:clloodddddxxxdddddddooooooooooooooooddddxxxxxxxxkkkkkkkxxxxxxxkkkkxxxxxxxxddddddddddddddooollccc:::::;'..........................................             ..
   ...                         ..',;;;:ccllooodddddxxxxxxdddddoooooooooooooooddddxxxxxxxxxkkkxxxxxxxxxkkkkkkxxxxxxxxxdddddddddddooollccc::::;,.............................',;::::cc::;'................
                            ...,;::::::clloooodddddddxxxxxxxddddooolloooooooooodddxxxddxxxxxxxxxxxxxxxkkkkkkkxxxxxxxxdddddddoooooollccc::::;,'.......................',,;;;:ccllllllllc,................
                          .',;:ccc::::cclloooodddddddxxxxxxxxdddddoooolllooooooodddddddddddxxxxxxxxxxkkkkkkkkxxxxxxxxdddddoooloooollcccc:::;;,''''................'',;::ccclllllllllc:'.................
                     ....';:cccccc::cccllloooodddddddxxxxxxxxxxdddddooollllllloooddddddddddddxxxxxxkkkkkkkkkkkxxxxxxdddddooolllllllccccc::;;;;:::::;;;,,,'''''',,;::cccclllllllllcc:;'..................
                .....',,;:::cccccc:ccccllloooodddddddxxxxxxxxxxxxddddoooolllllllooooddddooodddddxxxxxxxxxkxxxxxxxxxddddddoolllllllccccccc:;;,;;:::ccccccc:::::cccccclllllllllllc:,'.....................
            ...',,;;;::::::ccclllccccllllooooodddddddxxxxxxxxxxxxxdddddooooolllllllooddooooooddddxxxxxxxxxxxxxxxddddddoooolllcccccccllccc::;;,;;:::cccccclllccllllllllllllc:;;,'........................
      .....',,;::::::::ccccccclllccccllllooooodddddddxxxxxxxxxxxxxxxdddddooooolllllloooooooooodddddddddddxdddddddddooooollllcccccllllllccc::;;;;:::ccllccccccclllllllllc:;,.............................
   ...',,,;;;;:::::cccccccccclllllcccllllooooooddddddxxxxxxxxxxxxxxxxdddddddoooolllllooooooooooooooooooddddddooooooolllllllcccllllllllllcc:::;;::ccclllllccccccllllllc:;'..........................     
...',;;;;;;;:::::::ccccccccccllllllccllllooooooddddddxxxxxxxxxxxxxxxxxxddddddooooollllloooooooooooooooooooooooollllllllllllllllllllllolllcc:::::ccclllllllllccccllllllc:;,,'''''''...........           
,;;;::::::::::::::ccccccccccclllllllcllllooooodddddddddxxxxxxxxxxxxxxxxxxddddddoooooollllooooollllllllllllllllllllllllllllllloollllllolllcc::::cccllllooooollcccclllllllllccccccc::;;,,''............   
::::::::::::::::cccccccccccccclllolllcllooooooddddddddddxxxxxxxxxxxxxxxxxxdddddddoooooooooolllllllllllllllllllllllllllllloooooollllllllllccccccccclllooooooolllclllllllloooooooollllcccccccc:::;;;;;,,,,
::::::::::::::cccccccccccccccclllooollllooooooodddddddddxxxxxxxxxxxxxxxxxxxxddddddddooooooooolllllllllllllllllllllllllooooooooolllllllllllccccccccllloooooooooollllllllllooooooooollllllllllllllllllllll
;::::::::::ccccccccccccccccccccllloolllllooooodddddddddxxxxxxxxxxxxxxxxxxxxxxxxdddddddddooooooooooooolllllllllllllooooooooooooooooooooollllccclccclllooooooooooolllloooooooooooooooollllllllllllllloolll
;;::::::::cccccccccccccccclcccclllllollllloooodddddddddxxxxxxxxxxxxxxxxxxxxxxxxddddddddddddooooooooooooooooloooooooooooddddddooooooooooolllllllllllloooooooooooooooooooooooooooooooolllllllllllllllllooo
;;;:::cc:::cccccccccccccccccccccllllllllllloooddddddddddxxxxxxxxxxxxxxxxxxxxxxxxdddddddddddddooooooooooooooooooooooddddddddddoooooooooooollllllllllllooooooodooooooooooooooooooolllollllllllllllllllllll
;;;::::cc:::cccccccccccccccccccclllllooollloooddddddddddddxxxxxxxxxxxxxxxxxxxxxxxddddddddddddddddooooooooooooooddddddddddddddddoddoooooooolllllllllloooooooooooooooooooooooolllllloooooooooooooollllllll
;;;;::::ccccccccccccccccccccccccclllloooollloooddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxdddddddddddddddddddooooodddddddddddddddddddddddddooooooollllllllloooooooooooooooooooooooollllloooooddddoooooooollllll
;;;;::::cccccc:::ccccccccccccccclllllloooollloodddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddddddddddddddddddddddddddddddddddddddoooooolllllllllooooooooooooooooooooolllllllloooooodooooooooooolllll
;;;;:::::ccccc:::::cccccccccccccllllllloooollloodddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxdddddddddddddddddddddddddddddddddddddddddooooolllllllooooooooooooooooooooooolllllllloooooooooooooolllllllll
;;;;;:::::ccccccccccccccccclllcllllllllllooolllloodddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddxxxxxxxxxdddddddddddddddddddddooooololllloooooooooooooooooooooolllllllloooooooooollllllllllllcc
;;;;;::::::cccccccccccccccccccccccclllllllloolllloodddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddddddddddddoooooolllllooooooooolllllllllllllllllllooooooooollllcclllccccccc
:;;;;:::::::ccccccccccccccccccccccccllllllllllllllloddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddddddddddddoooooolllllooooooooollllllllllllllllllloooooooollllccccccccccccc
;:::;:::::::cccccccccccccccccllccccclllllllllloolllloddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddddddddddddoooooolllloooooollooolllllllllllllllllooooooollllllllccccccccccc
;::::::::::::ccccccccccccccccllcccccclllllllllooolclloddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddddddddddddddddoooooolllloooooollooollllllllllllllllllooooollllllllllllllllcccc)";
    cout << pep;
}
};




