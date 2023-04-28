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
        Health = x;
    }
    int getDamage() {
        return Damage;
    }
    void setDamage(int x){
        Damage = x;
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
    cout << pep << endl;
}
    void cole(){
        string coleImage = R"(oolllllllllccccccccllllllllllllllllllllllllllllllllllllllllloooooooooooooooooooooooooddooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
oollllllllllcccccccllllllllllllllllllllllllllllllllllllllloooooooooooooooooooooooooodddooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
ooolllllllllccccccclllllllllllllllllllllllllllllllllllllloooooooooooooooooooooooddddddddddddddoooooooooooooooooooooooooooooooooooooooooooooooooooooooo
ooollllllllllccccclllllllllllllllllllllllllllllllllllllooooooooooooooooooooodddddddddddddddddddddddooooooooooooooooooooooooooooooooooooooooooooooooooo
oooollllllllllccclllllllllllllllllllllllllllllllllllllooooooooooooooooooodddddddddddddddddddddddddddddoooooooooooooooooooooooooooooooooooooooooooooooo
oooolllllllllllllllllllllllllllllllllllllllllllllllllllooooooooooooooooodddddddddddddddddddddddddddddddddddooooooooooooooooooooooooooooooooooooooooooo
ooooollllllllllllllllllllllllllllllllllllllllllllllllloooooooooooooooooodddddddddddddddddddddddddddddddddddddddddooooooooooooooooooooooooooooooooooooo
oooooollllllllllllllllllllllllllllllllllllllllllllllooooooooooooooooodddddddddddddddddddddddddddddddddddddddddddddddddddddddddddoooooooooooooooooooooo
ooooc::clllllllllllllllllllllllllllllllllllllllllooooooooooooooooooooollccccc::::ccccllloodddddddddddodoooooooooooooooooooooooollllllllllllllllllllccc
oooo:..';:cllllllllllollooooolllllllllllllllllllcc::cccccccccccc::;,'.................'',;ccloooooooooooooolllllccc::::;;;;;,,,,,,,''''''''''.........
oool:'...'',:clllllloooooooooooollooooooloooolll:'.......''''''...       ...................';cldddollllllcc::;;,'''.....................            .
oool;'...''..;clllloooooooooooooooooooooooooooll:'............           ......................':loddoc;,,'''................                      ...
oool;........;cllllooooooooooooooooooooooooooool:,............                        ............,:oxxo:'.........                               ....
oool,........;clllloooooooooooooooooooooooooooll:,''..........                         .......';;;;:cox00kl;..                                    ....
oooc,........;lllllooooooooooooooooooooooollllcc;,..........                      ..............';clodx0XNNKOo;.                                   ...
oooc'........;lllllooooooooooooooooooooooollllc:,''.......                          ...............';coxOKKXXNKc..                                   .
oooc'.......':lllllooooooooooooooooooooooollc:;;,............                           ..............';codkOOk:...                                  .
ooo:''..'''.':llllooooooooooooooooooooooool:;;,'..............                               ............,;cc:cc,.....                               .
ooo:'',,,,'.,:llllooooooooooooooooooooollc:,'.........',;;;;'... ..                      ... ..............',,,:c;....................................
ooo:,,;;,''',cllllloooooooooooooooooolc::;,'... ....';clllcc:,.......                     ...................''';lolllllollcc:ccllllllllllllllllllllll
ool;'',,;,'',clllllooooooooooooooolc;,',''.........,cloooolcc:,'..''..                     ......................,oxxxddxxxxxxxddddddddddddddddddodddd
ool:;;,,;,'';cllllllc::cccllllllcc;'..............;cloooooolcc:;...','..                    ....................'';oxxdxdddddddddddddddddddddddddooddd
ooolllccc::::clcccc:,...',::::c:;,'..''..........,cloodddoooollc;'.,;,,..                     ..................';,:dxdddddddddddddddddddddddddddooddd
ooooolllllllllccccc:'.....,;;;;;'...............':clodddddoodddol:,,;:;,..                     ..................';,;odxdxxxdddddddddddddddddddddooddd
ooooolllllllllcccccc;'....';;;,'....','... ....',:looddddddddxxddoc;,;cc;'.       ...       .......................':ddddxdddddddddddddddddddddddooddd
ooooollllllllcccccccc;'....,:;'.....;;,..  ....';cloddddddxxxxxxxdol;,;cc:'..     ............................... ..:kOdddxxdddddddddddddddddddddooddd
ooooollllllllccccccc::;'...';:;,'..';,..   ....,:cloddddddxxxkkkkxxdo:,;cl:;,..   ............... ................ ..cxxdddxdddddddddddddddddddddooodd
ooooolllllllccccccc:',;,'...',,'.',;;.    .....,:lloddddddxxkkkkkkkxxdc;;lllc,...................  ............... ...:xOxdddddddddddddddddddddddol:;;
oooollllllllccccccc;..','.....'''',,'.........';cllooddooddxxkkkkkkkkkxl::cllc;'..................  ...................lOkxdddddddddddddddddddddddc'..
oooolllllllcccccccc:'...'''...,;;,'...........,:clllllc::clodxkkOOOOOOkkdc::::c:;'......''''....'......................,oxxdxxddddddddddddddddddddl,..
ooollllllllcccccccc:;;'..'''..';;,'..........';c::::;,,'',;:loxkOOO00OOkkxolc:::c:,''....''.............................cxxddxddddddddddddddddddddl;''
ooolllllllccccccccc:,,;;,.'''..,,;,.   ......,:c:;;;:::::;,,,;cldxkOO00OOOOOkxlc::,''...................,'..............ckOOkxddddddddddddddddddddo:''
oollllllllccccccccc:'.',;,''''''.............;c::clooddxxxdlc:;;:ldxxkOO00000Oxoc:,''............ .....';,'.............,coxkxddddddddddddddddddddo:'.
oollllllllccccccccc:;,''''''','.............':cccodddxxxxkkkkxdlcclooxkkOOOOOkxdolccc:'..'','....  ....,;;'........ ..... .';:codddddddddddddddddddl,.
oollllllllccccccccc:,,,,,,;:c:..............':cloddddollllooddxxxxdoodxkOOOOkkxxxxxxdl:,;::::;;;,.......,;'.......    ..   ...';ldddddddddddddddddol;'
oolllllllcccccccccc:''''';ldl,..............,clodddol::clolodxxddddolodxkOOOkxxxxxxddddlloddoc;::;......','.......   ....  .''..;odddddddddddddddddo:'
ollllllllcccccccccl:;,,,,;:;'...............;lodddol::cddc:ldk0kdollccodxkkkkxdoddddxkdcclokOxl::;.......'........  ........',,''cddddddddddddddddooc,
ollllllllcccccccccl;'...'''.................:lodddolllclc;;cllddollc:codxkxxxdooodddddl:cccldollc:;;cl:,',..................,::;''cddddddddddddoooooc,
llllllllccccccccccl:'''''.....  ...........':loddxddddooooddddddolcc:coxxkxxxdolloddddxxxxxxxxxxxxxxkkxdol:'..''............,:cc;.';;;;;;;;::cooooool;
llllllllccccccccccc:;''...''..  ...........':loddxxxxxxxxdddddoollccloxxkkkkxdoooodddddxxxxxkkkkkkkkkkkxdoc'..''.....'''....':cc:..        ...;looool;
llllllllccccccccccc,'.....,'.. ........'....:loodxxxkkkxxxxxxxxxdooodxxkkOOkkkxxkkkkkkkkkkxkkkkOOOOOOkkxdo:'.',''...',;;'...':cc:'.         ..'cllool:
llllllllcccccccccc;'','..','.. ........''...:loddxxkkkkkkOOOOOOkxddddxkkOOOOOkkkkOO0000000OOOOOOOOOOOkkxdl;..,,''..',:cc,...':cc:'.          ..;lllllc
llllllllcccccccccc:;::,..',............'....;loddxxkkkOO000000OkdoooxkkOOOOOOkxddxk0KKKKKKKKKK00000OOOkkdl,..,,'....';c:'....:c::,...         .':llllc
lllllllcccccccccccc:::,.....................;lddxxkkkOO00KKKK0kdolldxkOOOOOOOkxddodxOKKXXXXXXKKK000OOOkxdc'..''......,,,.....,:::,',,.....    ..;cllll
lllllllcccccccccccc::;'.....................,lddxxkkOO000KKK0OxdoodxkOO00000OOkkxxxxk00KXXXXXXKK00OOOOkxoc...'...............';;;'...;:cc;.   ..':llll
lllllllcccccccccccc:;'......................'codxxkkOO000KK0OOkxdddxO00KKK000OOkkkkkO000KKXXKKKK0OOOOkkxo:....... ............,,,'...,lool;.   ..;ccll
llllllccccccccccccc::;,'....................'codxxkkOOO00000OkkxdoloxO0000OkkxxxkkkOO0000KKKKKK00OOOOkxxo;......         ... .'''..  .;c::;.    .':ccc
llllllcccccccccccccccc:'.....................:odxxkkkOO0000Okxddol;,:oxkxdolc::cokkkOO0000KKKKK00OOOOkxdl'....           ..  .....   ........    .;:;;
llllllcccccccccccccc:;'................. ....;ldxxkkOOO00Okkxdool:''',:::;;;,,,,cdkkkOO000KKKK0000OOkkxd:. .                 ......   ........   .';;;
lllllcccccccccccccc;'................      ..'codxkkkOO00Okddoolc;;;:ccccccllllloxkkkOOOO00KK00000OOOkxo,.                 .........     ..........','
llllcccccccc:::c:;'...............         ...:odxkkkkO00OkdddddddxxxkOOOOOOOOOOkkkkkOOOO00KK000000Okkdc..             ..'.......  ..    ..,;,'.......
lllccccccccc:::,'...............            ..,ldxkkkkO00OkxdoloxkO0O0KKKKXXXK00OxxxddkOO00KK00000OOkxl,.               ..         ....    .:lc:,,'...
llcccccccc:::,................               ..:odkkkkO000Okdl;;coxkO0KKKKKKK0OOkkxo::ok00KKK00000Okkd;.                          .......   .:llllcc:;
ccccccccc::,................                 ..,ldxkkkO0K0Okxo:;:coxkO0OOOOOOOkkkxdl;;ok00KKK0000OOkdc.                             ......  .'cooooooo
cccccccc:;'................                  ...:oxkkkO0K0OkxoccllodxkOOOOOOOOkkkxo:;lk000KKK0000Okxo'                               ......  .;loooooo
cccccc::,................                     ..'cxkkkO000OkxdclddoloxkOOOOOOOkxxxollxO000KK00000Okd:.                                .....  .'coddddd
cccc::;'...............                        ..;oxkkO00OkxxdlcoxxolodxxxxxxxddxdooxO000KKK0000Okxl;..                                ....   .lxxxxxx
ccc::;'..............                          ...:dkkkO0OkxdxdccoxxxkkkxkkkOOkxdodxkO000KK0OOOOOxocccc;....                             ..   .lkOOOOk
cc:::,..............                           ...,lxxxkOOkxdddoccllodkkkkkxkkxodxkkOO000K00OOOOkoccllool:'.....                              .lOOOOOO
c:::;..............                          ......;oxxxkOOkxdxddooooooooddddddxkkkOO00000OOOOOkdlclooooddo:'......                           .oOOOOOO
:::;,.............                        .........;loddxOOkkxxxxxxkkkxxkkkOOkOOOOO000000Okkkkxdllodooooddxdl,.........                       'dOOOOOO
:::;'...........                        ..........,ccloddxkOkkkkkkkOOOOOOOOOOOO000000000Okkkkxdllodxddddddxxdc'...............               .:k0OOOOO
::;,............                    .............':lllloodkOOkkkkOOOOOOOO00000000000000kkxkxxdolodxxxxxxddxxdo;...................           'd000000O
::;,............                 ................,cooolllodxkOOOOOO0000000KKKKKK00000Okxxxxxdoodxkkkkkkkkkkkkx:.........................    .cOOOOOOOO
;;;,...........              ....................'cdddolllodxkOOO00000K0KKKKKKKK0000Okxxxxxddddxkkkkkkkkkkkkkkc.............................'okkkkkkkO
;,,'..  .....            .........................:dxxddoloodxkOO0000000KKKKKKKK00OkxxxxxxdddxkkkOOOOOkkkkOOOx;..............................,:ldxkkxx
;,'...                ............................;oxxkxdoooodxkOO00000000000000OkkxxxxxxxxxkkkOOOOOOOOOOkOOkl'.................................':dkkx
:;,...             ................................:dkkkxdddddxxxkkOOOOOOOOOOOOkkkkkkkkkkkkkkOOOO000OOOOOOOkd,....................................':dx
;;,....       .....................................'cxkkkkxdxxxkkkkkkkOOOOOOOOOOOOOOOOOOOkkkOO000000000O0OOx:.......................................';
;;,....     ........................................':dOOOkxxxkkOOOOOO00000000000000000OOOOO00000000000000Ol'.........................................
;;,'..................................................;oOOOkkkkkOO000000KKKKKKKKKKK0000OOO000KKKKK0000000kl'..........................................
;;,'...................................................'lkOOkkkkOO000KKKKKKKKKKKKKK0000OO00KKKKKKKKK0000x:............................................
;;,'.....................................................,lkOOkOOO0000KKKKKKKKKKKK00000000KKKKKKKKKKK0ko,.............................................
'.......                ..      .....         .............;llllllooooooooooooooooooooooodddddddddddol:....)";                                           
    cout << coleImage << endl;
    }
void judeviation(){
    string jude = R"(WWWWWWWWWWWWWWWWWNNNNNWNNNNNNWWWWWWWWNNNNNNNNNNWNOdxkNWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWXx:;:cllolllllclOKKXkco
WWWWWWWWWWWWWWWNNNNNNNNNNWWNNNWWWWWWNNNNNNNNNNNWNOdxkNWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXkc,';,,,,,,,,,cOKXKd:o
WWWWWWWWWWWWNNNNNNNNNNNNWWWWNNNNNNNNNNNNNNNNNNNWNOxxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNK0xc,.'.'',,,,,,l0XX0dld
WWWWNNNNNNNNNNNNNNNWNNNNNWWWNNNNNNNNNNNNNNNNNNNWNOxxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN0xl,.'''',,,,,,dKXXOllk
WWWNNNNNNNWWWNNNNNNNNNNNNNWNNWWWWNNWWWNNNNNNNNNWNOxxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWXxl,.'''''',,,;kKXXx:ok
WNNNNNWNNNNWNNNNNNNNWNNNNNNNNWWWWNNWWWWNNNNNNNNWWOxxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXxc,.''''''',':OKXKdcdO
WWNNNWWWWWWWWWWWWWWWWWNNNNNWWWWWWWNWWWWNNNNNNNNWWOxxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXKKKXXXX0OO00000KXXNNNXXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNX00dc,.''''''',,l0KX0olxk
WWWWWWWWWWWWWWWWNNNNWNNNNNNWWWWWWWWWWWNNNNNNNNNWW0xxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNX0OOOO0000O000OOOOO0XXNKKXNNNNNNNXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXK0dc,''''''',,,dKXKkodkk
WWWWWWWWWWWWWWWWWWWWWWWNNNNNNWWWWWWWWWNNNNNNNNNWW0xxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXK0OkkxddoodddxO0OOkO0K00XNNNXNNNXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN0dc;;;;:::cc:ckKXKdlxOO
WWWWWWWWWWWWWWWWWWWWWWWWNNNNNNWWWWWWWWNNNNNNNNNWW0xxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXK00KK0OOkdolcc:codxkkkkkOKXXXXNNNXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNX0d;',,;;:::::lOKX0ookkk
WWWWWWWWWWWWWWWWWWWWWWWNNNNNNNNNNWWWWNNNNNNNNNNWW0dxkXWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXKKOOO0KK00Okdxxdoolcccllolok0KXNNNXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXOxo,...'''',,,l0KXkldkkk
WWWWWWWWWWWWWWWWWWWWWWWWNNNNNNNNNNNWWWWWWNNNNNNWW0dxkXWNNNNNNNNNNNNNNNNNNNNNNNNNXK0OOkxdxxkOOKK0OxdddkOOkxl;,:;::ldk0XNXKXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNKkc,.'''''',,;dKKKxcdkkk
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNNNWWWWWWWWNNNWWWW0xxkXWNNNNNNNNNNNNNNNNNNNNNXK0OOOkxoolc:::cloddxkkdox0K0kxl,,;:;;;cox0KKXNNNXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNOc'.'''''''';xKK0olxkkk
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW0xdkXWNNNNNNNNNNNNNNNNNNXXKOkkkkkxxdolcc:,'',,;:cooodk00kkxc',:c:;cc:okKNNNXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNKkdc,''.'..''':OKKOloOOkx
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW0ddxXWWNNNNNNNNNNNNNNNXKOxdolcc:::::ccc:;,,'..''..',,:odxxoc,,:cccddclxOKNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWXOxc'.'..'''',l0KKxlxOOko
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXOxxk0XNWNNNNNNNNNNNNX0kolccc:;,,,,'.'',,'.''...''..''...,;,;::clloxxoldk0XNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWNKkc;;;;::::::xKK0ookOOkc
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNN0xxx0NNNNNNNNNNNNNXKOoc:::;,,,,'''''''......................':loccoo:;:loxkkO00KXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN0xc;;;;::::;:kKKOodOOkd;
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNWW0xdkXWNNNNNNNNNNXK0kl:;;,,'...................................,;'.''...',;;:ccldkOKXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWWXkl,........;OXKxlxOOxl'
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNW0xxkXWNNNNNNNNNX0ko:,,'''''...........................   ..............,cdxxdooloxOKXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWWXkdo,........c0X0olxkkxl:
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNW0xxkXWNNNNXK0Okxoc,'....'',''''''....................     ..............,coddxkoccdOKXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWN0kd,.......'oKXOooxkko::
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNNW0xxkXWNNX0kocc:;;''..................................     ................',;clccoxk0XNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWWWN0o,...'''';xKKxoxOOkc''
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNWKxxkKNXOdl:::;;,'.............................................................'';okOOKNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWNKkc,,;;;:::lOX0dokOOd;',
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNWKxxkKXkc:::;;,'.......'...................................................'.....',lO00XNNNNNNNNNNNNWWWNWWWWWWWWWWWWWNNNNNNNWNWWNkc,,;;;;,;l0X0ddOOxc'',
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNWWKxxkOx:;::;;,'...''''''...........................................................,okOKNNNNNNNNWWNWWWWWWWWWWWWWWWWWWWWNNNNNNNWNKx;........lKXOdxOko;',,
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWKkkxl;,;::;;,''',,''''.............................................................;ldOXNNNNNNNNWWWWWWWWWWWWWWWWWWWWWWWNNNWWWWWNk;.......'oKKOxOkxl::cc
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXXKxl:;',;;:::;,,,,'..'...............................................................'cx0XNNNNNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWNWWWXk;.....'',dKKOkkxoc::cc
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXKkl:;,''',;::;,,'''.'..................................................................,ckXNNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNWWWNk:;;;::::ckKOxxkxc.    
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNN0l;;,',,,;:c;,'''''''..'........................  ......................................';dKNNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx;'',,,,':OKkxOOd;.....
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNKo;,'',,'',::;,,''''''''..................................................................':dKNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNWWNd,'''''''c0KkO0kl......
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNXx:,,'''',;,;::;''.'''......................................................................,cONWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo,'''''',oK0OOOk:......
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNN0d:;'''',;;,,;,;,''..................................  .....................................';dKNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWKo;;;;:::ckK000Ox;......
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXOxl;,'',',,',,,,,'''.......'.........................    ....................................,l0NNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWKo;,;,,;;l0XK00Oo'......
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXOdc;;;;,''.',,,'''''...'...,'..................... . ....            ........................';xXNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo,''''',oKXK0Okl......'
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNKdcc:;;,'..'''''''.....'.....'..''...','.....'.....  ...... ...  ....  ........................'cONWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXd;,,,,,;dKXXK0Od::ccccc
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWN0occcc;,,,''''''......','.....',,,,'',;;,'..''.''.'.............................................',o0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXx:,;;;;ckXKO0Oxl:::::::
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNKxcclc:;;,,''''.......,:cc::::ccccc::cccc:;'..'',''''............................ .................,o0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXx;''''':OKOkOxc.......'
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNOoclc:::;,''''.......;looooooooooolllllllllc;,;;;,,,,'..............    ........  .................':dKNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXd;,,,;;l0Kxk0d,..''',,,
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWKOkd:;;;,,'''.......':oddddoooooooooooooooooolccccccc::;,..............   .......  .................',o0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo,,;;;;dKOdO0d::ccccccc
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXKKx:;,''','......';lddddolclllllooooddddoooooooolllllllc:::;;,,'''''.... ..........................',o0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXd;'''';dKkd0Ol,;;;,,,,,
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXx:;,;,',;'....':oddlcc:;;;;;;;:;;;;:lllclooooooooooollllccc:::;;;;,,,'...........................';dKNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx:;;;;:kKxk0x;.........
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXx:;;;,.';;'..'coddolllcc:;,,,,;,,'..',;,;;cclooooooolllllccccc::::::;;,,.........................',dKNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx;,,,,:O0k00o,'',,,,,,,
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNOc,;;'..,;'..,ldxxxddddoolc:;;,,,''''',,',;:clllooolllcc::;;;;;;;;;;;;;;,,'....  ................',lk0XWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx:;:::lO0kKOc',,,,,,,,,
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXd;,;'.',,,..;oxkkxxxxdddooolllc::;;;;;;;::clllllc:::;;;;,'.....................      ............:xOKNWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo;;:::o000Xx;',,,,,,,,,
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW0l,,,,,'',:ldxkkkxxxxdddddddooolcc:;;::cclooollc:;;;,,,,'.......................     ...........',lOXNWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo;;;;;o0kO0o'',,,,,;;;;
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx:;,;;,':dxxxxxxxddddddddddoolc:;,,,,;:cldddol:;;,,,''''''''....................     ..........'':xXNWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx;;;;;x0kOkc,,;;:::::::
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXkc;',;,,oxxxxxxxxddollllllllc:;,''.'',:cloddolc:;,,'....'',;::c:::;;,,,,'''.....     ..........',:kXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx;,;;:kOkOxc:cccccccccc
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXkol;',,,cxkxdddddddoolc:;,,''.........';clooool:;;,'.....'',:cllcc::;;;;,,,,,'',.     ..........':dKNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNd;,;;cO0k0d;,;;;;;;;;::
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXxllc;',;:dkxdddddddddoooollc:;;,''''',,;:cloooolc;;,'.......',:ccc:;;,,,,,'''',,;'    ..........,ld0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNd,,;;o00O0o,,;;;:::::::
WWWWWWWWWWWWWWWNNWWWWWWWWWWWWWWWWWWWWWWWWWWNxlool:;;:okkxdddddddddddoooolllcc:::::cclloodoool:;,,''............''''''''''''',;,.. .........,cdk0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo;;;;dKOOkc;:cccccccllc
WWWWWWWWWWWWWNNNNWWWWWWWWWWWWWWWWWWWWWWWWWW0oldddoc:cxkxxxdddddddddddoooollllllllloooddoooool:;,,,''''',,,'...........''',,,,;;,.. .......,ok0XNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo;;;:kKkOd;,;;;;;;;;;;;
WWWWWWWWWWWWWWNNNWWWWWWWWWWWWWWWWWWWWWWWWWW0ooxxxdoclkOkxxxdddddddddddoooooolloooodddddooooolc:;,,,,,'',,,,,,,'''...'',,,,,;;;;:,. .....,cxKXNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXl,;;cO0OOc..'''',,,,,,,
WWWWWWWWWWWWNXKKNNNWWWWWWWWWWWWWWWWWWWWWWWWXxdxddolcdOOkxxxxxddddddddddddooooooooddxxxxdddddlc::;;;;,,,,,;;:;;;,,,,,,,,,,,,,;;;:,.....';dKNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXo;;;o0OOx;',;;;;;;;;::;
WWWWWWWWWWWNKkO0KNNNNNWWWWWWWWWWWWWWWWWWWWWNkdxooooldOOkxxxxxxxxdddddddddddoooooddddddxxddddoc:::;;;;;;;;;;;:::::;;;;;;;,,,,;;;:'....';l0WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNd:::xKOOo,',,,,;;;;;;;;
WWWWWWWWWWWNKkdddkOOKNWWWWWWWWWWWWWWWWWWWWWNOddoodoodOOkxxxxxxdddddddddddddooooooddddxxxxxxdlccc::;,,;;;;::::::::::::;;;;;;;;;;:'...',;l0WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXdodx0K0O:.''''',,,,,,,,
WWWWWWWWWWWXOxocoxxONWWWWWWWWWWWWWWWWWWWWWWW0xxooddodkOkxxxxxxxxxdddddddoooooolodkxddddxxxdolcc:::;;;;,;;:::::::::::::::;;;;;;;:...';;;l0WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNKXNWX00x;,;;;;;;:::::::
WWWWWNNXNWNK0kxoxKKKKKXNWWWWWWWWWWWWWWWWWWWWKxxxdoooxkOkxxxxxxxxxxddddddooooooooddl:;,,:odolc:,'',;:::;,;::cccc::cc:::::::;;;;:;...';;;l0WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXNK00o,,;;;;;::::::::
WWWWWNN0k00O0K0OOOkkddkXWWWWWWWWWWWWWWWWWWWWXxdkkdooxkOkxxxxxxxxxxxxddddooooooooolccllccllc:,'....';:;;,;:cccccccccccc::::;;;;:;...,;::xXNXKXXXKXNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXXKKKOkOOOOkOOOOOOOOO
XNNXNNKxoxxxxOOxxkxkkkKWWWWWWWWWWWWWWWWWWWWWNOdxxxddxkOkxxxxxxxxxxxdddddooooooooollcllllc::;'''''','''',:ccccccccccccc::::;;;;:;...';:o0Ok00kO0000KNNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNWX0XWWNXNWWWWWWWW
XNNK000xxkOkxkkxxkOOOXNNWWWWWWWWWWWWWWWWWWWWXkddxxxdxkkkkxxxxxxxxxxddddooooodooolllcc::;,,;:;'.''''''',;;:ccccccccccc:::::;;;;;,..'';cOKOO0OkO00kO00KXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXXXXKKKKXXXXXXXXXXXX
0XNKkOOxookkkOOOO0KKXXXNWWWWWWWWWWWWWWWWWWWWXkxxxxdoxkkkkxkkxxxxxxxddddoooooollllcllllc:;,,;;,...'',,,,;;;:ccccccccc::::::;;;;;'.'.':x0KKOOK000OO0000KXKKKNNNWWWWWWWWWWWWWWWWWWWWWWXKXK000OO000000OOOOOO
OO0Okkxl:lxkOOkOkkO000O0XWWWWWWWWWWWWWWWWWWWWXK0Okkxxkkkkkxxxxxxxxxddddooollllllllllllllll:;;,,'''.'',,;;;::::::::::::::::;;;;,'...,oO0kO0O0KK000K0000KK0KK0KNNWWWWWWWWWWWWWWWWWWWWNKNKxdddddddddddddddd
kkOOkxxxdodxdkOkkk0OkxkxOXNWWWWWWWWWWWWWWWWWWWWWWN0Okkkkkkkxxxxxxxxdddoollllloolcccccccllc:,,,,,,,'''',,,;;;;:::::::::;;;;;;;,'',,,:xOkxxOO0OxxOOkOK0OOO0KK0KKKNWWWWWWWWWWWWWWWWNNWXKNKxddddxddxdxdddddd
kkkOOkxOOxoldxkxxxkxxxkkOKXXXWWWWWWWWWWWWWWWWWWWWNOkOkkkkkkkkkxxxxxdddolccllll::::cloooollc;;;;,,,,,''',,,;;;;;;:::;;;;;;;;;,,',;,,oOO00OkOK0dxOOxkKK0OOKKK0KKXWWWWWWWWWWWWWWWWNNNWNXNX0OOOOkkOOO00O00OO
OxxOOxdxxdccxOxlddllldxdxkOO0NWWWWWWWWWWWWWWWWWWWNOk0OkOkkkkkkxxxxxdddolll::;,''.,clxkkkxxkxoc;;,,,,,,,''.',;;;;;;;;;;;;;;;,,,',;';dxxxkO0000OkO0kOO00000OO0KXWWWWWWWWWWWWWWWWWKXWWNXXXNXXXNNNNNNNXXNNNN
kxxkOkolodo:lkxldkkkkkxxxdkXNWWWWWWWWWWWWWWWWWWWWWOx0OOOkkkkkkxxxxxxddollc:;'....;cllodollool:,'.',,'''''..',;;;;;;;;;;,,,;,,,'',;;ddodxdxxOOxdxxxkOkxk00O0KXNWWWWWWWWWWWWWWWWWKXWWXKNWWXOXWWWWNXNKNWNXN
00OOkdc::lddkKOdk0KKOkOOkOXXXNWWWWWWWWWWWWWWWWWWWWOxO0OOkkkkkkxxxxxxddoollllcccclooooooooollc::,.....'''''..,;;;;;;;;;,,,;;,;loc:cokxdxxdddddxdkkdxxddkOK0OKWWWWWWWWWWWWWWWWWWWKKNNXXNNNKOXWNNNXXNXXNXKK
dkO00OkxodkxkkdlkXK0xdOkx0K0KXWWWWWWWWWWWWWWWWWWWWOdk00Okkkkkkxxxxxxddooooooodooodddooolllccc:::;''',,,,''',,;;;;;;;;;;;;;;,ckxddddddddddxxddkxxO00OkkOOK00XWWWWWWWWWWWWWWWWWWWKXWNXKNNWKOXWWNNXXXXKK000
kkkxxxxkxk0xokklxKKkdddddxkk0XXXKXNWWWWWWWWWWWWWWWOdxO0Okkkkkkkxxxxxddddddddddddddddddddooooolc:::;,,,,,,,,,;;;;;;;;;;;;;;,;dxoooodxddxOOOOkxOkxxkO0000OOKXWWWWWWWWWWWWNWWWWWWWKXWWX0NWWXOXWWNXXKKXKkk0K
OO0OOOxdddOkdO0dlodxxoddxOOOOOOO0XNWWWWWWWWWWWWWWWOdxOX0kOkkkkkxxxxddddddddoooooolllooooollllcc:;;,,,,,,,,,,;;;;;;;;;;;;;;;lxdoododxxdxkkO0OOxloxxkkO0K0OKNWWWWWWWWWWWWNNWWWNNNKXNWK0NWWXOXWWNNXXXKK00KN
xkOkxxxxkxxxxxkocclxkoloxkkxkOO0XWWWWWWWWWWWWWWWWNOdxONKkkOkkkkkxxxxxdddddoooooolc:;;,,;;,,,;,,'''',,,,,;;,,,,,,,,,,,,,;;;ckxodddoodxdoooxkxkOkkkkkOO00000XWWWWWWWWWWWWWNWWWWNNXXWWK0XNWXOXWWNNXXXXWNKXX
xOOkdoodkkxdoooloolodddxkOkkxxOKXNWWWWWWWWWWWWNKKXkddONXOkOkkkkkkxxxxxdddooooooollc::;,,''''''..''',,,,;;;,,,,,,,,,,,,,;;;dKOddddooxkkxdxxOkdxOOkkxk0OOKK0XWWWWWWWWWWWWWNWWWWNXKXWWX0XNWXOXWWNXXXXNWNXXX
kxxkxdooxkddxdoddxxxkkkkxxkOOKNWWWWWWWWWWWWWWWN00XkdxONXkkOkkkxxxxxxxxxdddddoooooolllc::;;,,,,,',,,,,,,;;,,,,,,,,,,,,,,;,;okxdddddxkO00kxkkxdxkxdxxkkxk0KKXNNWWWWWWWWWWWNNWWWNXKXWWK0XNWXOXWWNXXKXNNXXNX
Okx0OxkOkkkxddoooxolooddodkOXWWWWWWWWWWWWWWWWWWXKXOxdoodkkkkkxxxxxxxxxxxddddddooooolllccc::;;;;,,,,,,,,,,,,,,,',,,,,,,,,,,lkdxxdddxxddxkkkdok0OOOkOOxk00000KNWWNNWWWWWWNNWWWWNXKXNNK0XXNKOXWNNNXXXNX0KKK
OO00OkkxxOOkkkOkkkxoodxooxkKNWWWWNXXXNNNWNXNWWNKkdc;'..cxkxkxxxxxxdxxxxxxxxxdddooooolccccc:::::;;;;,,,,,,,,,'''''',,,,,,,,,cxkxddxkkxdddoooloxkkxx00kO0O000NWWWNWNNNNWNNNNNNNKKK00K00KKX0OXWWNXXKXX00K0K
kOOOkxkOO0kdldxkxkOo:loldO0KKXNXKKK00KKKXNXX0kl;'......;xkxxxxxdddddddxxxxdddddoooolcccc:::cc:::;;;;;,,,,,,'''''''',,,,,,,'.,d000KXXX000xlloodxdddxxxxO000XWWWWNNXXNNWWNNWWNK0K00KK0OKKKK0KXXXNXXXNXKXKX
kOO00000OkdoodxolxOxddxxOKK000KKKKK0O0KK0Odc,..........'oxxxdddddddoooodddddoooollc:::;;;;:::;;;;;,,,,,''''''''''''''',,,,'. 'oO00KKK0KK0kxkxddolodxddk000KXXNNNNNNNNWNXNNXK00K0K0000KKKXK0K0XWNNWWWNNNN
OOkxddkxoclddddlloooxxk000000000KKK0OO0kl,............ .lxddddddddooooolloollllccc:;;;;;;;;;,,,''''''''.....''''''''''',',.  ..ck0KXKKK0KK00xdxddolok0KK0000XNXXXNNNNNNXXX0OOKKOKKO000KKXK0K0kkkkkkk0X0X
0Oxxxxxxdooddoodo:cdkO00OOOKK000KKKKKkl,.............. 'oxdddddooooooollllcc:::;;;,,,,,,,'''''..................''''''''''.    .,lxOKKK00KX0kOOkOOdlx00OkO00XXXXNXXXKKXXX0kOOKKOOOO000KKKK0X0dddddddOX0K
kOOOOOOkOOOOxolllcdOKXXXXXXXXXXXXXXKk:........  .....  ,dxddddddooooolllllcc:::;,,'''''''.........................'''''''.     ....';cdkOKN0xkOOkkxxxxO0KKKXNNXXXK0XXKKXXKOO000OOOOO00KK00KN0dodxxddOXOK
kOKOxxxdxkkO0xl:lxOKXXXXXXXXXXXXXXKx;.........        .,oxdddddddoollllllllccc::;;,,'''''.........................''''''.      ........':xK0dddkOxkOxxO0KKKKXXXXXX00KKKKXX0O0K0OO00OOXKK0OXWKxxOOkxxOK0K
dkOkkkOOOOOOO0OdxOKNNNNNNNNNNNNNNXx:'.......          .;odxxddddddooollllcccccc:::;;,,,'''.........................''....      ...........;dOxodoclllooxKXKKXXXXNNKKNK0KKKKXXXXKKXXXKXXXK0KNX0OkkkxxOKKX
kxdxkkxxxkkkkOkkkOKXXXXXXXXKKKKKKk:'..... .      ....',:oddxxxdddddoooollccccc::::;;;,,''''......................'''.....      .............';lc;,,;;::d0KKKXNNNNXOOKKO0XXNNXNWNNNNNNNNNNXNN0kkkkkxxxOKN
koldOkkxdOOxxkxdddkOO00000OOOO0Oxc,'....       ...',;;;codddxxxddddooooolllcc:::;;;,,,'''......................''.......      . ........ ......,';:;;,',cdO0KXNNOdoloxxOXXNNXNNNNWNNNWWWNXNXOkkkkkOkxxxd
olcdkkkddxddkxoldxxk0KXNN00XNNXOl;'....     .....,:::::coddddxxxxxdddooooollccc::;;,,,'''................................    ............  .......';;:c:;;lxk0XNKko;;lkXXXNNXNWWNNNNNNNNNNNNNXKOkkkdoo;'
loddddxkxooxkOOOOxxO0KKKK0KXX0xc;,'....   ......,::cccclooddddxxxxxdddooooollllc::;;;,,,'''..............................   ..........................',;;::cx0KKkc;co0NNXNNXXNNNNNNNNNXXXNNWWNNNKOxdc''
kOOddxOOOOkOOK0xldO0000KK0Okdlc:;,''...  .......;cccccclloodddddxxxxxdddooolllllc::;;;;,,,''''''''''''...................  ..............................'''',;:cc:codOKKXNNNXXNNNNNNNXNXXNNWWNNWWX0d;'.
xxxxkkkkkxkOO00dldOOkOOxolc;;lc;,,'....  .......;lcccccllooodddddddddxxddoolllllccc:::;;;,,,,,,'''.''.......''''''.........................  ...............'''''',,,;;:cldxOKNWNNNNNNNXKKXNWNXNWKO0x::c
OkxxkkOxooodxO0kxxkxol:,;c;;ll:;;,'..... .......;lcccccclllooddddddddddddddollcccc:::;;;;,,,,,''''..'.'''''''''''''..............................................''''',,,,,,;:oxOKNNNNNNNXXXKOkO0000kook
xxdxkkkdoooooxkkdc:;'.,:c;,:lc;;;,''............;lcclllccllloooooddddddddddddoollcc::;;;,,,,''..'''''',,,,,,,,'''''...............................  .................'''''''',,,,:ldxk0XNWNNKOkdk00kxxxx
dkxxxkOOdoollllc;,;'.,::;,;ll:;;,,,'............,lllllllccllllooooooooddddddddoooolllc:::;;;,,,,,,;;,;,,,,,,,,'''..........................  ...... .......................''''''',''';cdk0XKKXXK0kddocc
xddoollc:;;:::;,;;..,::,.,clc:;;,,,''...........'clllllllccllllllooooooooodddoooooolllcc::::;;;;;;;;;;;,,,,,,''''...................   ....   ................................''''''''.''',:okKNN0xdoood
l:;,;;:;,;::;,,;;'.,;;,..;lcc::;;,,,''...........:lllllllllccllllllllooooooooooooolllllcc::::;;;;;;,,,,,,,,,''''.................... ......  ...................................'''''........';ldxkxxxdk
,'';:;,,;::,,,;,'.';;,..'cc::;;;;,,,,'...........,llllllllllccclcclllllllllllllllllllccc::::;;;;;;,,,,,,,'''''....................   ......  ....... ..............................';::;.........',:lkxx
.';:;,',;;,,,,,'.';;,. .;c::;;;;;;;,,,'..'.......'collllllllllcccccccccclllllllllllccccc:::;;;;;;,,,,,,'''''.......'''...........    .......  .....  ...........................':lxkOkkl............cxd
,;;;,'',;;,',,'..,:;...,:::;:;;;;;;,,,'..'.. .....:loooooolllllllccccccccccccccccccc:::::;;;;;,,,,,''''''.........''''..........    ........  ....... ........................;lxOOOOOkkx;............;c
,,,'.'',,,,,,'..';;'..,;:::;;;;;;;;;;,,'.''.......,looooooooollllolllccccc::::::::;;;;;;;,,,,,,,,''''''''''''....,,''.........     ........   ....... .....................':dkO0OOOOOOkxo'............'
o;...',,,,,''...,;,..,;:::;;;;;;;;::;,,''.,,.......:oooooooooooooooooolllcccc:::::::;;;;,,,,,,,,,,,,,,,,,,''....',,'........   .............  ...........................,lxOOOOOOO0000kxx:.............
kx:..',,,,'''..,;;...;:::;;;;;;;;:::;,''..;;,......;ooooooooooooooooooooooolllllllclllcccccccccccccccc::,'.....,,,'.........................  .........................;okOOOOOOOOO0000Odc'.............
kkxc'',,,''''.';:,..';:::;;;;:::::;,.... ..'.......'ldoooooooooooooodddddoooooooooooooooooollllllllllc;'......',,;'.........................   .....................'cdO0OOOOOOOOOO00Od:................
kxxxdc,'''''..,:;..';:::;;;::::;,..       ..........'cddddoooooooodddddddddoooooooooooooooooooooooo:;'.......''',;.    .....................   ...................,cxO0OOOOOO0OOOOOOo,....... ..........
xxxkkkd:''''',;:'..;:::;;;;,'...           ...........,:lodddddddddddddddddddooooooooooooodddddddl,.........','''.          ................     .... ..........'cx00000OOOO00000ko,.........  .. ......
xxxkkkkkl,''',;,..';;,'''.......           ...............,:ldddddddddddddddddddoooooooodddddddl;..........';,'.                   .........     ...   .......':x00000OOOO00000Oo,..... .....  .. ......
xxkkkkkkko,.,;;. ..'.................      ........   .......':ldddddddddddddddddddddddddddddl;...........',..                           ...   ..    . ......'oO00OOOO00OO000Oo,.............  .. ......
xkkkkkkkOx;.,;'. ..''....................   .........  .........';codddddddddddddddddddddddl;.........'....                                   .    ... ......;k00OOOO000000kl,.............    .. ......
kkkkkkkkOx;',;....''''......................   ........   ..........,coddddddddddddddddddo:'.........''..                                        ............,x0OOOOO0000kl'..............     .  ......
:dkOkkkkOd;';;.  ...............................  ........ ...........';loodddddddddddoc;'........'''..                    .           ...     ........ .....'d00000000kc'..............       .  ......
.:xOkkkkOd,';;. ....................................  ...................,coodddddddl:,.............                      ...       .....     ........  ......l000000kc'..............      .     ......
.':xkkkkkd,';;. ..''...................................  ..................;loodddl,'..'.........                  .......      ......      ..................,ldxxdc'...............    .....    ......
.,,,cxOOOo,';;. ...''''.....................................................'cool;'.'''....                            ..    ........   ......................................... ..   ......     ......
',,'',lxko,';;. ....''''......................................................;;'''....                       ...      .....................................................................      ......
';,,,,',cc'';,. .'...'''''.........................................................               ............... .........................................................................       ......
,,,,,,,....';,...''.....'''....................................................            .............................................................. .................................       ......
,,,,,,'...',;'..''''.......................................................''.        ...................................................................  ......... ......................       ......
,,,,,,'...',;. .','''''...................................................'.,,. .........................................................................  .........   ..............  ....       ......
,,,,,,'...',,...',,''''....................................................'''...........................................................................  .........    .............  ....       ......
,,,,,,''..',,..',,,'''................................................... ...............................................................................  ..........     ..........  ....        ......
',,,,,''..';'..,,,,'.'..'................................................................................................................................ ...........      ........   ....       .......
,,,,,,,'..';...,,,''''''................................................................................................................................  ............      .......     .        ... ...
',,,,,,'..',..',,,,'''''................................................................................................................................  ..  ........       .....                  ....
'''',,,'..',..,,''''''''''..............................................................................................................................  ..   ........      .....                ......
''''''''..,,..,,''''''..'............................................................................................................................... ....  ........       ....               .......
.''''''...,'.',,'''''''.......................................................................................................................................  ........      ....              .....  .
..'''''...,'.',,'''''''''''....................................................................................................................................  .... ..       ...              .   ....
...''''...,..,,,'''''''''''....................................................................................................................................  .....         ...                ......
....'''..',..,,,''''''''''.....................................................................................................................................   . ..          ..               .......
....''...',..,,''''''''.........................................................................................................................................    ..          ..              ........
.........''.',,''''''...........................................................................................................................................                 .             ........ 
.........''.',,''''''''''''......................................................................................................................................                                     ..
.........''.',''''''''''''.......................................................................................................................................                 .              .......
.........''.',''''''''''''''''...................................................................................................................................                             ......... 
  .......''.','''''''''''''''''...................................................................................................................................                                   ...
.........'..''''''''''''''''''''.................................................................................................................................                              .........
........''..','''''''''''''''''''.................................................................................................................................                          ........... 
'.... ...'..,,,,,,,''''''''''.'''................................................................................................................................                           ....      ..
,;,'.  ..'...'...'''''..''.....'............................................;:;.....................................................................................                        ............
.;cc,. ..'...........''''''''.''...........................................;;.;:....................................................................................                        ............
  .... ......'',,'''',,''''''...............................................,,;,.....................................................................................                      .............
      .......'',,,,,,'''''''''''.....................................................................................................................................                      .............
      .......',,,,,,,,''''''''''......................................................................................................................................                     .............
       ....',,,,,,,,,'''''''''.......................................................................................................................................                      .............
       ......'',''''''''''''.........................................................................................................................................                     ..............
       ........''''''''''.........................................................................................................................................                        ..............
        .....'''''''''''''........................................................................................................................................                        ..............
        .... .''''''''''''....................................................................................................................................                            ..............
         ... .''''''''''''....................................................................................................................................                            ............ .
         ...  .''''''''''...................................................................................................................................                          .    .............
          ..  .........................................................................  ..................................................................                                 .....   ....
           ..  ........................................................................  ...............................................................                                 .... ..........
           ..  ......................................................................    ..............................................................                                    .............
            .   ......................................................................   .........................................................  ..                                 .       .........
             .   ............................................................  ........  ..........................................................                                     ...             
                 ......................................................................  ........................           .  ....................                                      .....          
                  ..........................................................................................             .........................                                        ....   .......
         ..       ..................................................................................    ........................................                                            ............
        ':'        .........................................................................................................................                                                 ...........
       'co;.       .........................................................'c:;;'......................................................                                                      ..........
     .;oool,.      .........................................................;l'.',................................................                                                         .  ..........
    'okkkkkxo:.    ....................................................................................................                                                      .              ............
   .ldooddxO0x'    ..........................................................................................                         ....                                ...               ............
 .,loolldkOOOo.     .......'.............................................................................             ......   ........                                   ..                ............
 ,dxxxxkOOOOOl.  ..........''.........................................................................     .........................                   .........  .   ......                 ...........
.:kkO00OOOOOOc. ............''....................................................................     ...........................        ................................                    ..........
.:xk00OOOkOOOc. .............''..................................................................    ...........................      ...................................                      ....... .)";
}
void ratman() {
        string fart = R"(.,cl;.                              .       ...........','..           .',:llllc:,..'...,;,,...  .......',;;::::::;'....'',''......                                                        ...'cxkO0KKKK
.,cl'                               ..     ............''..           .',:llc:;;,......,;;'.... .......',;:::ccccc:,.'''',,,''''... ....                                                    ..':dkOO00KK
.,l:.                      ..    .....     ...............          ..';ccc:::::;'....',,'.........'',;:ccllllllccc:,,;;;;;;,,,''.......                                                     ..;xkk000KK
,;:.                      ....             ............            .';:clllcllc:,'''''',,,'......',:ccclooooooooollcc::c:::::;,'........                                                      .'lddx0000
:;,.   ..                  .....            ...                  ..;cloolllllc:;,,,;;,,,''..''',:cloooddddoodooooolcc::::::cc:,''......                                                        .':llk00K
o;'.   ...        .         ....          .....   ..          ..';clooooollc:;;;;;;;,'''''',:coddddddddddddddddooooolc::;;;,,,''.............  ..                                                .,coO00
xc..   .          ..          ..       ...',,'.......     ....,:lodddddddolcc:::;;;;;;:ccloddxxxxxxxxdddddddddddddoollc::;,'............'''..........                                            .;ldk00
x;.    .         ....                 ...,::;,,''..........,;codddxxxxdddddoooollloddxxxdxxxxxxxxxxxxxddddxxxxxxxddollcc::;;;;;;;;;;,,'','...............                                       .,oOO000
l...  ...        .....                ..;clcc:;,,,,'''',;:cloddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxkxxxxxxxxxxdxxxxxxxxxxdooollccccc:::::;,,,,,'.',''''''''...........                               ..cxkO0KK
'...            ....              .  .';coollccccc::::clloodddxxxxxxxxxxxxxxxxxxxxxxxkkkkkxxxxxxxxxxxxxxxxxxxxxxxxxxddoollllcccc:::::::;,,,,,,,,,,,,''''.......                                ..lkk0KKK
.. ....         ..               ....':looollllcc::::ccllooooodddxxxxxxxxkkkkkkkkkxxxkkkkkkkkkkkkkkxxxxxxxxxxxxxxxxxxddolllllllllccccc:;;;;;;,;,,,'''........                                   .ckk0KKK
.   ...          .              ....,clooollcc:::::::::cccllllooooddddxxxxxkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxxxxxxxxxxxxddoollllllllllccc::;;;,,,,''............               ...                 .ckO0KKK
. .....                        ....;cloolc:;;;;;::;;;;:::::::::::cccccllooddxxxxxxxxxkkkkkxxxxkkkkxxxxxxxxxxxxxxxxxxdddoolllllllllccc::;;;,,''..................             ..                 .ckOKKKK
  ....                       ...',:loolc:;;:;;:::::::ccccc:;;;;;;::::cccccccllodddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddddddoollccccccc::;;,,,,,''.....''''................                          .lkO0KKK
  ....     .                ..;::cllolc;;;:cc:ccllllllllllllllccccllllllolcc::ccloooddddxxxxxxxxxxxxxxxxxxxxddddddddddoolllccccc::;,,,,,,,''',,,,;,,,,,,,'''''.................                .,ok0KKKK
  ...                      .':clllooolccclllllooooddddddddoddddooooooooooolcccc::cloooodddxxxxxxxxxxxxxxxxxxddddddddoooollcccc::;,,,,,,,,,,,;;;;;;;;;;;;;,,,,,''''...............              .:lxKKKKK
  ...                    ..,cllllooooooooddddddddddddxxxxddxxxxddddddddoooooolllcccllllooddddddddxxxxxxxxxxxddddddoooooollcc::;;;,,,,,,;;;;:::::::::::::;;;;;,,,,'''...............            .odx0KKKK
  ...                   .':clllooooooooooddddddddxxxxxxxxxxxxxxxxxxxxddddddddooollllllooooodddddddxxxxxxxxxdddddooooooollcc::;;;;,,;;;:::::ccccccccc:::::::;;;;;,,'''..............            'xkkO00KK
   ..                 ..':clloooooooooddddddddddxxxxxxxxxxxxxxxxxxxxxddddddddddoooooooooooooddddxxxxxxxxxxxdddddoooooollcc::;;;;;;;:::::::ccccccccccccc:::::;;;,,,,''.........''....           ,xOO000KK
   ..                 ..,clloooooooooodddddddddxxxxxxxxxxxxxxxxxxxddddoodddoooooodddddddoooddddxxxxxxxxxxxxdddddooooollccc::;;;;;;::::::ccccccccccccccc::::;;;;,,,'''.........''''..          .ckO0KKKKK
.  ..                 ..;cllooooooooooddddddddddxxxxxxxxxxxxxxxxxxdddooooooooooooooodddddddddddxxxxxxxxxxxxddddooooolllcc:::;;;;;::::cccccclllllcccccc:::::;;;,,,,'''.........'''''.          .oO00KKKKK
..                    .':clloooooooooddddddddddddxxxxxxxxxxxxxxxxdddooolllllllloooooodddddddddxxxxxxxxxxxxxdddooooollccc:::;;;;;;:::ccccccclllllcccccc::::;;;,,,,'''..........'''''.          'dO0K0KKKK
,..                   .,:cloooooooooodddddddddddddxxxxxxxxxxxxxxdddoolllllllllllllloooddddddxxxxxxxxxxxxxxddddoooolllcc:::;;;;;;;;::ccccccllllccccc:::;;;,,,''''''''.......''.'',,,.          ;k00KKKKKK
o;.                   .,:clooooooooooodddddddddddddddddddooooooooooollccccccccllllllloodddddxxxxxxxxxxxxxxddddoooollc:::;;;;;;;;;;::::cccllccc:;;;,,,'''''.'...............''''',,,.         .lO00K00KKK
kd:..                 .':clooooooooooooooddddddoooolllllllllclllccc:;:::::ccccccccclllooddddxxxxxxxxxxxxxxxdddooollcc:;;;;,,,,;;;;:::ccccc:;,,'''''''''''''''...............''.'',,.         'xO00000000
00x:..                 .;clooooooooooooooooooolllllllllllcc:;,,,''.......'',::c:ccccclloodddxxxxxxxxkkxxxxxdddooollc::;;,,,',,;;;::::cc:;'................         .............',,'         :OO0KKKKKKK
KX0xl'                 .,cllooooooooooooollc::;,''''........              ...';::::ccclloddddxxxxxxkkkxxxxxdddoollc::;,,''''',;;::::::;..                                  .....',,'        .o0O00KKKKKK
XXK0Oo'.     .         .,:cloooooooooooolc;,,'''..................      ...'...';:cccclloddddxxxxxxkkkxxxxdddoolllc::;,'''''',;;::cc:'.......'................. .....     ......'',,.      .:x0000KKK000
XXXKK0d;.    ..        .':clooooooddoooollccccclllccccc:::c::::;;;;,,,,,,,,,,,,,;:clcclooddddxdxxxxxkxxxxxddooollc::;,''..''',;;:::;'.',;;;;;;;;;;,,,,,,,,,'''...................',,.     .;dkO00KK00000
XXXKK0Oo,.   ..         .;clooooooooddddooooooooooodddddddddooooollccc::::::::::ccllllloddddddxxxxxxxxxxxdddooollc::;,''..''',;;::;,,;:;;;;;;;;;;;;;;;;;;;,,,,''.................','.     'oOO0000000000
XXXXXK0d;......         .,clooodooodddddddddddddoooddddddddddddoooolllcccc:::::cclooooooddddddxxxxxxxxxxxdddoollc::;;,''...'',;;::;,,;;;;;;;;;;;;;;,,,,,,,''''....................''.   .,lk000000000000
XXXXXKOd:.......        .,clooodddddddddooddddddddddddooollllllcccc::::::::::::cclooodddddddddxxxxxxxxxxxdddoollcc:;;,''...',,,;;;;,,;;;;;;,,,,,,,'''''''''''....'''''''''........',.  .cdk0000000000000
XKKKK0Ox;',,,'....      .'cllooooooddddddddddddddddddoollllccccc::::::;::::ccclloodddddddddddddxxxxxxxxxxdddoollcc:;;,''...'',,;;;;;;;;;;;;;;;;,,,,,,,,,,,,,'',,,,,,,,,''''.......',. .;dOO0000000000000
KKKKK000xc;'''......    .'clloooooooodddddddddddddddddooooolllllccccllllloooooddddxxdddddddddddxxxxxxxxxxdddoollcc:;,,'.....',,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,,'''......'''.;ok000K00000000000
XXXXXKKKk,  .''',;:,..  .'cloooooooodddddddddxxxxddddddddddddddddddodddddddddddddxxxxxxxxxxxdddxxxxxxxxxxxddoollcc:;,''.....'',;;;;:::::::;;;;;;;;;;::::::::::::::;;;;,,,,''.......',cdkO000000000000000
XXXXXXKKx,  .,;;:cod:....,llooooooodddddddxxxxxxxxxxxddddddddddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxddoollc:;,''......',,,;;;:::::::::::::::::::::::::::::;;;;;,,,,'''......',d0OO000000000000000
XXXXKKXK0xc:c:::codxd;...;loooooodddddddxxxxxxxxxxxxxxxxdddddddddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddoolc:;,''.......',,,;;::cccc:::::::::::::::::::::::;;;;;,,,''''.......,d000000000000000000
XXXXXKK00Oxdocccldxxdl,..:ooooooddddddddxxxxxxxxxxxxxxxxxdddddddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxdddolc:;;,'.......''',,;:::ccccccccccccc::::::::::::;;;;;;,,,''''......';d000000000000000000
XXXXKKKK0Oxo:,;loxxxxdc''coooooodddddddxxxxxxxxxxxxxxxxxxddddddddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddollc:;,'........''',;;::::ccccccccccccc:::::::::::;;;;;,,,''''......';x000000000000000000
XKKKKKK0Okkxoccldkkxxdlc:looooooodddddxxxxxxxxxxxxxxxxxxddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddoolc:;,''........''',;;;:::ccccccccccccccc:::::::::;;;,,,,''''......';x000000000000000000
K0KK0OO0OOOkdc:lxkxddooooooooooooddddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxdxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddoollc:;,''........'',,;;::::cccccccccccccccc:::::::;;;,,,,,''........;x000000000000000000
K0KK00KKK00Okkkxxxdoooloddoloooooddddxxxxxxxxxkkkkkkxxxxxxxxxxxxdxxxxddddxxddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxddoollc::;,''........'',,;;:::ccccccccccccccccc::::::;;;,,,,,'''.......,d000000000000000000
KKXXKKKK000000Kkddolllloxdollooooddddxxxxxxxkkkkkkkkxxxxxxxxxxxxxxddddddddddddddxxxxxkkkkxxxxxxxxxxxxxdddxxddddooollc:;,,,''.......''',,;:::ccccccccccccccccc:::::;;;;,,,,''''.....',o000000000000000000
0KXKK0KKKKKKKKKkddollcloxxollloodddddxxxxxxxkkkkkkkkkkxxxxxxxxxxxdddddddddddddddddxxxxxxxxxxxxxxxxdddddddddddddooollc::;;,''.........'',,;::::ccccccccccccccc:::::;;;;,,,'''''...''',o000000000000000000
K0KKKK0KK000K00kxdolcclloddollooddddxxxxxxxxkkkkkkkkkkxxxxxxxxxxdddddddddddddddddddxxxxxxxxxxxddddxxxxxxxxdddddooolllcc:;;,''..........',,;;::ccccccccccccc:::::::;;;;;,,,''''...''',o00000000000OOOOOOO
KK000000K00KKKKOdddolccloooolooooddddxxxxxxkkkkkkkkkkkxxxxxxxxxdddoooooooooooodddddxxxxxdddddddddxxxxxxxxxxxdddooolllcc::;,''''.........',,;;::ccccccccccccc::::::;;;;;,,,'''....''',d0000000OOOOOOOOOOO
KK0KKXXXKOO0KKKOdoxxddoddolooooodddddxxxxxxxkkkkkkkkkkkxxxxxxxdddooooooooooooooodddxddddddddddddxxxxxxxxxxxxxdddooolllc::;,,'''...........',;;::ccccccccccc::::::::;;;;,,,'''....''';x00O00OOOOOOOOOOOOO
XKKXXKXXK0000KX0xooddxxxkxdoooooddddxxxxxxxxkkkkkkkkkkkxxxxxxdddooooooooooooooodddddddddddddddddxxxxxxxxxxxxxxxddoolllc::;,,'''.............',,;::::cccc::::::::::;;;;;,,,'''.....'':k0OOOOOOOOOOOOOOOOO
KKXXXXXXXKKKKKKK0xdddxxxxxxolooooddddxxxxxxxxkkkkkkkkkxxxxxdddddooooolllllooooddddddddxxxxxddxxxxxxxxxkkkkkkxxxxdoollcc:;;,,,''''''''''........',;;::::::::::::::;;;;;,,,,''......',lOOOOOOOOOOOOOOOOOOO
KKXXXKXXXXXXXXXXX0kxxxxxxxxdooooodddddxxxxxxxxxkkkkkkxxxxxdddddooolllllllllooddddddxxxxxxxxxxxxxxxxxxxxkkkkkxxddoollcc::;;,,''''''''''''..........,;;:::c::::::::;;;;;,,,'''......',oOOOOOOOOOOOOOOOOOOO
KKK00KXXXXXXXXXXXKKOxxxxxxxdoooooodddddddxxxxxxxxxkkxxxxxddddoooollcccccllodddddddxxxxxxxxxxxxxxxxxxxxxxxxxdddooollcc::;;;,,'''.'''''''............',;:::::::::::;;;;,,,,''........;xOOOOOOOOOOOOOOOOOOO
K00000KXXXXKKKKKKKKXKOxdxxxdooooooddddddddddxxxxxxxxxxxxddddoollcc:::cloodddddddoddxxxxxxxddddddddddddddooooooollcc::;;,,,,''......................',;;::::::::::;;;,,,,'''........:xOOOOOOOOOOOOOOOOOOO
KKK00KKKKK00K0O00O0KXX0xdxxdoooooooooodddddddddxxxxxxxdddooollc::::cloddddxxxxddddddddddoc:;,,,;:cloooolllllllccc::;;,,'''........................'',;;::::::::::;;,,,''''........'ckOOOOOOOOOOOOOOOOOOO
KKK00K000OO00000KKKXXXX0kdddoooooooooooooddddddddxxxddddoollc:::cloddddddxxxxxxxxdooollc:,'''',,;;:::cccccc:::::;;;,''......      ...............'',,;;;::::::::;;;,,,'''.........'lkOOOOOOOOOOOOOOOkkkk
KKK00K00K00KKKKKKKKK00KXK0Oxooooooooooooooddddddddddddoollcccclooddddddddxxxxxxxxxddoolccclllloooooolllcccc::;;,,''..........................''',,,,,,;;;;;::;;;;;;,,''...........'oOOOOOOOOOOOOkkkkkkkk
KKKK0000OOO00000000000KXXXX0doooddooooooddddddddddddooolccclloooddddddxxxxxxxxxxxxxxxddddoooddddddddoooolcc::;,,'''........................''''',,,,,,,,;;;;;;;;;;,,,''...........,dOOOOOOOkkkkkkkkkkkkk
KKKK0OO0000K0KKKXXXXXXXXXXX0xodddddoooodddddddddddddoollllloooooddxxxxxxxxxxxxxxxxxxxddddddddddddooooooollcc::;;::;;,,'''''''''''.........'''''''',,,,,,,,;;;;;;,,,,,'............;xOOkkOkkkkkkkkkkkkkkk
KKKKKKKKKKK0O0KKKKXXXXXXXXXKkdddddddoodddddddddddddooolllllllooddxxxxxxxxxxxxxxxxxxxxddddddddooooooooollllcc:::::::;;,,,,,'''''''''''''''''''''''''''',,,,,,;;;,,,,'''............ckOOkkOkkkkkkkkkkkkkkk
KKKKKKKKKKKK000KKKKXXXXXXXXKOddddddddddddddddddddddooooollllloodddxxxxxxxxxxxxxxxxxxxdddddddddoooooooolllcc::;;:::::;;,,,,'''''''''''''''''''''''''''''',,,,,,,,,,,''............'okkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKKKKKKKKKKXXXX0xddddddddddddddddddddddoooolllooooddddddddddddddddxxxxxdddddddddddoooooollllcc::::::::::;;,,,,'''''''''''''''''...........'',,,,,,,,,'''............:xOkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKKKKKKKKKKXXKXKkddddddddddddddddddddddooolllooooooddddddddddddddddxxxxxdddddddddooooolllllccc::::::::::;;,,,,,'''''''''''''''.............''',,,,,,''''...........'okOkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKKKKKKKKKKXXKXK0xodddddddddddddddddddddoooooooooooodddddddddddddddddddddddddddoooollllccccc::::::;;;;;;;,,,,'''''..'''''..................',,,,,,,,''''...........:xkkkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKKKKKKKKKXKKXXXKkddddddddddddddddddddddooloooooooooooooooooooooooooooolllllllcccccc::::::;;;;;;;;,,,,,'''''...............................',,,,,,,'''''..........;dOkkkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKKKKKKKKKXKXXXXX0xdddddddddddddddddddddooloooooolc::::::::::::::::::::::::::::::::;;;;;;;;;;;;;,,''''...................        .........',,,,,,,,''''..........'okkkkkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKKKKKKKXXXXXXXXXX0xoddddddddddddddddddddooooooool:;,''''''''',,,,,,,,;;;;;;;;;;;;,,,,,',,,,,,,''''''...............               ......',,,,,,,,,'''.......  .'okkkkkkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKKKKKKXXXXXXXXXXXK0xoddddddddddddddddddddoooooollccccccccc:::;::;;::::cc:::cc:::::::;;;;;;;;,,,,,,,,,'''''''..........          ........',;;;;,,,,''.......  .'okkkkkkkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKKKKXXXXXXXXXXXXXXXXXXOdddddddddddddddddddddooooollooooooooollllccccccc::cccccccloolllcc::::::;;;,;;;;;,,,,,'''''...........  ..........'''',;;;,,,,,'........ .'okkkkkkkkkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKKXXXXXXXXXXXXXXXXXXXXXK0xodddddddddddddddddddooolooooddddddoooooolllllllcccc:ccclooooolc:::::;;;;,;;,,,,,''''...........................''',,;;,,,,,'....... ..,dOOOOOOOOOkkkkkkkkkkkkkkkkkkk
KKKKKKKKKKKXXXXXXXXXXXXXXXXXXXXXXXX0kdodddddddoddddddddoooooooooodddddddddddooooooooollllllcccccc::;;;;;;;;,,,,,,,,''''............................''',,,,,,,,'..........:xOOOOOOOOOOOkkkkkkkkkkkkkkkkkk
KKKKKKKKKKXXXXXXXXXXXXXXXXXXXXXXXXXXKOdoddddoooooodddddoooooooooodddddddddddddoooooooooooooooolllllccc:::::;;;;;;,,,,,'''''........................''',,,,,,''..........lkOOOOOOOOOOOOkkkkkkkkkkkkkkkkkk
KKKKKKKKKXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0xoooooooooooodddoooooooooodddddddddddddddddooooooooooooooooolllllcccc:::::;;;;,,,,'''.......................'''',,,''..........;dOOOOOOOOOOOOOOOOOOOOOkkkkkkkkkkk
KKKKKKKKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKOdooooooooooooooooooooooodddddddddddddddddddoooooooooooooollllllccccc::::;;;;,,,,''''.......................'''''...........'lkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
XXKKKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0xollloolllloooooooolloooddddddddddddddddddooooooooooooolllllcccccc:::;;;;;;,,,,,''''.....................................:xOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKOolllllllllooddddoollllooooodddddddddddooooooooooooooollllccccc::::;;;;;;;,,,,,,'''...................................,dOO000000000OOO00OO0000OOOOOOO00000000
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKkolcllllllloddddddooollooooooodddddddoooooooooooooooolllccccc::::::;;;;;;;;,,,,'''.................................'lk00000000000000000000000000000000000000
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOdolccclllllodddddddddooooooooooooooooooooooooooooooollllcccc::::::;;;;;;;;,,,,''.................................:x000KKKKKKK000000000000000KKKKKKKKKKKKKKK
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOdooolccclclloddddxxddddoooooooooooooooooooooooooooooollllcccc::::::;;;;;,,,,,''................................'o0KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0dodddoccccclloodddxdddddoooooooooooooooooooooooooooooolllllccc::::;;;;,,,,,'''................................:kKXKKXXXXXXXXXXXXXKKKKKKKKKKKKKKXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKK00OOOkoodddddocccclloodddddddddooooooooooooooooooooooooooooollllllc::::::;;;,,,,'''...............................'o0XXXXXXXXXXXXXXXXXXXXXXKKXXXXXXXXXXXXXXXNNNNN
XNNNXXXXXXXXXNNNNNNNNNNNNNXXXNNXOxoc:;,'....;looddddddlccclloddddddddoooooooooooooooooooooooooooooolllllcc::::::;;;,,,'''...............................,xKXXXXXNNNNNNNNNNNXXXXXXXXXXXXXXXXXXNNNNNNNNNNN
NNNNNNNXXXXNNNNNNNNNNNNNNNNNKkl;............,loodddddddolcclloodddddddoooooooooooooollllllllooooooolllllcc:::;;;;;,,,'''...............................;kXXXNNNNNNNNNNNNNNNNNNNXXXXXXXXXXNNNNNNNNNNNNNNN
NNNNNNNNNNNNNNNNNNNNNNNNNXkl,....           'loodddddddddolccllooooooooooooooooooolllllllllllllooolllllccc:::;;;;,,,'''...............................;xXNXNNNNNNNNNWWWWWWNNNNNNNXXXXXXNNNNNNNNNNWWWWWWW
NNNNNNNNNNNNNNNNNNNNNWNKd;.....             ,loodddddddddddolcllloooooooooooooooolllllllllllllllllccccccccc::;;;,,,''''..............................,lOXNNNNNNWWWWWWWWWWWWNNNNNNNNNNNNNNNNNNWWWWWWWWWWW
NNNNNNNNNNNNNNNNWNNWNKd,.......             ,looddddddxxddddolccllollooooooooooooollllllllllllllccccccc:::::;;;,,,''''...............................,lkXNNNNNWWWWWWWWWWWWWWWWNNNNNNNNNNNNNWWWWWWWWWWWWW
NNNNNNNNNNNNNNNNNNNXx;.........             ;oooddddddxxxxxxddllclllllllloooooooooolllllllllllccccccccc:::::;;,,,'''..................................'lKWNNNWWWWWWWWWWWWWWWNNNNNNNNNNNNNNWWWWWWWWWWWNNN
NNNNNNNNNNNNNNNNNNO:...........            .:ooodddddxxxxxxxxddolccllllllllooooooooollllllllllcccccc::::::::;;,,,'''....................................;ONWWWWWWWWWWWWWWWWWNNNNNNNNNNNNNNNWWWWWWWWNNNNN
NNNNNNNNNNNNNNNNKd'...........             .coooddddxxxxxxxxxdddolccclllllllloooooolllllllccccccccc:::::::;;;,,,''.....................................  .cxOXNWWWWWWWWWWWWWNNNNNNNNNNNNNNNNNNNNNNNNNXXX
NNNNNNNNNNNNNNNOc.............          ...'looodddxddxxxxxxxxdddollcclllllllllllllllllllcccccccc::::::;;;;;,,,'''.....................................    ..;lkXWWWWWWWWWWNNNNNNNNNNNNNNNNNNNNNNNNXXXKK
NNNNNNNNNNNNNXx,............     ..'',;:cccclooodddxdxxxxxxxxxddddollcccccllllllllllllllcccccccc:::::;;;;;;;;,,''''....................................      ...:dKWWWWWWWNNNNNNNNNNNNNNNNNNNNNXXXXXKK00
NNNNNNNNNNNNKl............    ..;cllodxxdlclloooddddxxxxxxxxxxdddddoolcccccllllllllllllccccccccc:::;;;;;;;:;;,,,''''...................................        ...;dXWWWNNNNNNNNNNNXXXNNNNNNXXXXXXKK00OO
NNNNNNNNNNNO:............   .';loodddxxoc:clloooddddxxxxxxxxxxxdddddoolllccccccllllllccccccccccc:::::::;;;;;;,,,''''''.................................          ..':kXNWNNNNNNNXXXXXXXXXXXXXXXXKK00OOkk
0KKXNNNNNXx,..........    ..;cclodddolc::cclloodddddxxxxxxxxxxxxdddddooollccccccccccccccccc::::::::;;;;;;,,,,,'''''''.''...............................           ...':dOKNNNNXXXXXXXXXXXXXXXKKK00OOOkkx
.',;:ldkOo'...........   .;oddoddol:;;:cccllloodddddxxxxxxxxxxxxddddddooolllccc:::::::::::::::::;;;;;;;;,,,,,''''''''''''..............................           ....',;:oOXNXXXXXXXXXXXKKKKK000OOkkkxx
      ..'...........    .:dxxdol:;,,;:cclllloooodddxxxxxxxxxxxxxdddddddoooolllccc:::::::::;;;;;;;;;;;;;,,,,,,,'''''''''................................           .....',,',ckXXXXXXXXKKKKKK000OOkkkxxxx
    .................  .;looolc;',,;:cclllllooodddddxxxxxxxxxxxxxdddddddooooolllccc:::;;;;;;;;;;;;,,,,,,,,'''''''''....................................           ......',''.,lOXXXKKKKKK0000OOOkkkxxxxx
  ................  . .:oddol:,,,;:ccllllllooooddddddxxxxxxxxxxxxxdddddddooooollllcccc:::;;;;;,,,,,,,,,''''''''........................................           .......'''..';oOKKKKK00000OOOkkkxxxxdd
.................    .;odxdc;,,;;:clllllllooooodddddxxxxxxxxxxxxxxddddddddoooooolllllccc::::;;;;;,,,,,,'''''...........................................           ........''....';ok0000000OOOkkkxxxxddd
................  . .;oxxdc,,;;;:clllooooooooooddddddxxxxxxxxxxxxxxxxddddddoooooooolllllcc::::;;;;;;,,,,,,''''.........................................          .................,;cdkO00OOOOkkxxxxxxdd
...............    .,oxxdc,,;:;:cclooooooooooooddddddxxxxxxxxxxxxxxxddddddddooooooooolllllccc:::::;;;;;;,,,,,'''''''..................................          ..................',,,;cok0OOOkkxxxxxxdd
...............    'lxxxl,,;::::cloooooooooooddddddddxxxxxxxxxxxxxxxddddddddooooooooooolllllccc:::::::;;;;;;,,,,,,,'''...............................           ...................'''',,:oOOOkkkxxxxddd
..............    .;dxkd;';:::::cloddddooooodddddddddxxxxxxxxxxxxxxxxdddddddoooooooooooollllcccc::::::::;;;;;;;,,,,''''.............................           .....................'''''';dOOkkkxxxxddd
)";
    cout << fart << endl;
}
void dripmiz() {
        string npass = R"(;c::::;;;;;;;;,,,,,,,''.......         .....                       ...'',,,,'''.............   ........                    .........................................',,;:::ccccclllcccccc:::::cloodxxxkk
;c::::;;;;;;;;,,,,,,,''.......         .....                        .......'''..............   .....................       .........................................',;;::cccccllllcccccc:::::cloddxxkkk
;c::::;;;;;;;;,,,,,,,''.......         .....                          ......'''.............      .....................   .........................................'',;;::ccllllllllccccc:::::clodxxxkkO
;c:::::;;;;;;;;,,,,,,''.......        ......                          ......'''............   .   .................................................................'',;::ccclllllllllccccc::::coodxxkkkO
;cc:::;;;;;;;;;,,,,,,''.......        .......                          .......'''..........  ... .................................................................'',,;::cclllllllllllccc:::::coddxxkkkO
;cc:::;;;;;;;;;,,,,,,''.......        .......                         ......''',;;;,',,'.................'''''''..................................................'',;;:ccclllllllllllcccc::::loddxkkkkO
;cc:::;;;;;;;;;,,,,,,''.......        .......                       .... ..,::;;::;;,,,,'''........'...'',;,,,,,'''...............................................',,;::ccllllllllllllllccc::cloddxkkkOO
;cc:::;;;;;;;;;;,,,,,''......        ........                      ........:lol:;;,,,,,,,,,,,,,'............',;;,'''..............................................',,;::ccllllllllllllllccc::cloddxkkkOO
;cc:::;;;;;;;;;;,,,,,''......        ........      ..     .        ..''',;:looc;;,'....'''',,''....          ..',,,'''...........................................'',;;:ccclllllllllllllcccc::cloddxkkkOO
;cc:::;;;;;;;;;;,,,,,''......       .........      .               ':llodoloo:,'.......  ..........             ...',''..........................................',,;;:cccllllllllllllllccc:cclodxxkkOOO
;cc:::;;;;;;;;;;,,,,,''......       .........                   ..,ldddxkdolc;''..........'..........     .        ..'''''.......................................',,;::cclllooooolllllllccc:cclddxkkOOOO
;cc::::;;;;;;;;;;,,,,''......      ..........                   .,:dkxxkOkdl:'','';c;.''..',.....'...........        ..,,'''.'...................................',,;::ccllooooooollllllccc:cloddxkkOOOO
;cc:::::;;;;;;;;;;,,,''......       ........                   .,;cxOOOOOdlc;,,:c;;::;;,...,'''''....             .....',,'''''''................................',,;:cclllooooooollllllccc:clodxxkkOOOO
;cc::::::;;;;;;;;;,,,''......      .........                   .,;:xO000kl'..';;,'.''...',''.....                    ..'',,,,'''''...............................',;;:ccllloooooooolllllccccclodxxkOOOOO
;cc:::::;;;;;;;;;;,,,''......      .........                   .'',okOOOOd,..','..... ..,'...  .                        ...,,,,''''..............................',;;:ccllloooooooolllllccccclodxxkOOOOO
;cc:::::;;;;;;;;;;,,,''......      ..........                 ....,:cdkkkdc,'',,'..   ..........                            ..'''''..............................',;;:cclloooooooooollllccccclodxkkOOOOO
;ccc::::;;;;;;;;;;,,'''.......     ..........              .......;:clooclo:';:,....  .........                                ..................................',;;:cllloooooooooollllccccloddxkkOOOOO
;cc::::::;;;;;;;;;,,'''.......     ..........              ....,'',;cc'..;c;;c:'......  .......                                  ...............................'',;::clllooooooooolllllcccclodxxkkOOOOO
;ccc::::;;;;;;;;;;,,'''.......    ...........            ....';:;,,;,'...;:;;,,,..............'.   ....                             ............................',,;::clloooooooooolllllcccclodxxkkOOOOO
;cc::::::;;;;;;;;;,,'''.......   ............          ..';:codddd:,''..,:ll:,'''.......',,,'...............         .                ..........................',,;:ccllooooooooooollllcccclodxxkkOOOOO
;cc:::::::;;;;;;;;,,'''......    ............          ...,:lodxk0d,',;;;;:lc:;'.''.....';;,,'........'.................  ..           .........................',;;:cllooooooooooollllccccclodxkkOOOOOO
;cc:::::::;;;;;;;;,,'''......    ............          . ...;oodkOx;.;ccc;,;::c:::::;,;,,::;;,',,,,''','''..'.',,'''.........             ......................',;;:cllooooooooollllccc:::clodxkkOOOOOO
;cc:::::::;;;;;;;,,,''.......    ............            ....:xOOxc,:lloxo:;:clooolooolllolllccc:;,,',;;;;;,,,;;,,,,,'''.........          .....................',;::clloooooooolllccc:::::clodxkkOOO0OO
;cc::::::::;;;;;;,,,''.......    ............             ..':xOkdlloolodxdoooodxxxxxkkkxxxxddddlcc:::::::c::::;;;;;;,,,,''''......    ..  .....................',;::cloooooooolllccc:::;;;:lodxkkOO000O
;cc::::::::;;;;;;,,,''.......     ...........             ..;oxdddoodxdoodkkOkxkkkOOOOOOOOOkkkkxdddoolllllcccc::::;;;;;,,,,,''....... ....    .................'',;:cclooooooolllcc::;;;;,;:codxxkO0000O
;cc::::::::;;;;;;,,,''......     ............              'ckklldddxkxxdxkkO00000KKK00OOOOOOOOOkkxdddoollllcccc::::;;;;;;;;,,''..........     ................'',;:cclooooooollcc::;;,,,,,:codxxkO000OO
;cc::::::::;;;;;;,,,''.......   ..............          ...,lOkooooxkOOkkkO0KKKKXXXKK00000OOOOOOkkxxxddoolllllccc::::::;;;;;;;,,''.......      ................'',::cllooooooollcc:;;,,,,',;codxxkOO00OO
;cc::::::::;;;;;;,,,''......    .............          ...;cdkkddddxkOOOO00KXXXNNNXXXKKK000OOOOOkkkxxddddooolllccccc::::::::;;;;,,'''...       ................',;:ccllooooooollcc::;,,''',;codxkkO000OO
;cc::::::::;;;;;;,,,'.......     ...........           ..,lldkkxdxkkkO000KKXNNNNNNNNXXXXKKK00OOOOkkxxxddddooollcccccc::::::::;;;;;;;,'....      ...............',;:cclloooooolllcc:;;,,,'',:lodxkkO000OO
;cc::::::::;;;;;;,,,'.......     ............         .. ,oddxddxkkkO00KKXXNNNNNNNNNNNNNXXKK00OOOOkkxxxddddoollcccccccc:::::::::;;;::;''..      ...............',;:cclloooooollcc::;;,,,'',:loxkkOO000OO
;cc::::::::;;;;;;,,''.......     ............         .. .lxxxxxxkO000KXNNNWWNNNWNNNNNNNXXXKK00OOOkkkkxxddddollllccccccc::::::::::::::,'..      ...............',;:ccloooooolllc:::;;,,,,,,:ldxkkOO000OO
;cc::::::::;;;;;;,,''.......     ............        ..  'lxkkkxxxkO0KXNNWWWWWNNNNNNNNNXXXKKK000OOkkkkxxxdddollllccccccccc::::::::::::;,'..      ..............',;:cclloooolllcc:::;;,,,,,;codxkkOO000OO
;cc::::::::;;;;;;,,,'.......   ..............       ...  'lxxxkxxkkOKXNNWWWWWNNNNNNNNNNNXXKK0000Okkkkxxxxxdddlccccccccccc::::::::::ccc:;,..       ............',,;:ccllllllllcc:::;;;,,,,,;lodxkkO0000OO
;cc::::::::;;;;;;,,''.......  ...............       .... 'ldxddodxkO0KNNWWWNNNNNNNNNNNNXXKKK000Okkkkxxdxxxxddollcccccccccc::ccc::::cclcc;'..      ............',,;:ccllllllllcc:::;;;,,,,,:lodxkOO0000OO
;cc::::::::;;;;;;,,''.......   .............        ...'.,cdxxdooodxOKNWWWNNNNNNNNNNNNNXXXXKK00Okkkkxxdxxxxxdollllllccccc:::::;;::::clllc:;'..    ....  ......',;;:cclllllllccc::::;;,,,,,:lodxkOO00000O
;cc::::::::;;;;;;,,''.......   .............       ....',;looxkxxddx0XNWWNNNNNNNNNNNNNNXXXXXKK0OOkkkkkxxxkxxxdoloollc:;;;;,,'''',,;:clllllc:'.    ...   ......',;:ccllllllllccc:::;;;,,,,,:ldxxkOO0000OO
;ccc:::::::;;;;;;,,''.......  ..............        ...,:lllldxkOOO0XNWWWWWWNNNNNNNNNXXXXXXKKK00OOOOOkkxxxxxxdollc:;'.............',;:cllll:'.    .... ... ...',;::clllllllllcc:::;;;,,,,,:ldxkkOO0000OO
;ccc:::::::;;;;;;,,''.......  ..............          .:oo:cldkO0KXNWWWWWWWWNXK00000OOkkkOO0000OOOOOOOkxxxddxdlc;,,''...'''',,,,,,,'.'',,;::'..   ...  ..  ...',;::cllllllllcc:::;;;,,,'',:ldxkkOO0000OO
;ccc:::::::;;;;;;,'''.......  ..............          .;:lolldxO0XNWMWWWWWNNX0OOkkxdollcccllodxxkkOOOOOkxdolooc:,,,,,''''..................... ... ..      ...',;::cllllllllcc::;;;,,'''',:ldxkkOO0000OO
;ccc:::::::;;;;;,,'''.......  ...............       ...,;cdlldkOKNWWWWWWWNNNNNXKK0kkxddoooooodxxkOO0000Oxocccc:;'.........''',,,,;:ccc;,. .... .;....      ...',;:ccllllllllcc::;;,,''''',:ldxkkOO0000OO
;ccc:::::::;;;;;,,,'.......   ...............     ...  ...;lldOKKNWWWNXXXK0Okxdoolc:;,,'''',;::coxOKXXKOxl:::;'......''''''...',;:clooooc,....  .',;'.  .. ...',;:cclllllllccc::;;,,''''',codxkOO00000OO
;ccc:::::::;;;;;,,''.......    .............  .  ...   ....'oOKX0xkOkdodddddddooool:,'''',',;;;;;;cdkkdc,..... ......''.......''',;:looooc.......;cc:,. .. ...';;:cclllllllcc:::;;,,''''';codxkOO00000OO
;ccc::::::;;;;;;,,''.......    ...............   ..     .:::dKNWk..,;,:oxk0K0Okxdl:,'....',,';:cooccll;......  ''....','.. ..co:',;;:clccc'.,'...'..,;. .. ...,;;:ccllllllccc:::;;,,,'''';codxkOO00000OO
;ccc:::::::;;;;,,'''.......     .............          'kNNK0kk0x::::;;lk000Oxdllxxl;'..';:;;;:ldkxl::;:cc;.. .,'.....'......,:;::::::;;::,,:;..,,..,;. .....',;;:cllllllllcc:::;;,,'''',;codxkOO00000OO
;ccc:::::::;;;,,,''...... .     .............         .cXK0XKxdkk0XXOolxKK00OOOkxkkl:;;;;;:;::ldxOkc,:x0Oxl:,. ........',,,;;:cclllc::;;::;:c;,',;'.;'. .....',;::clllllllllc:::;;,,''''';codxkOO00000OO
;ccc:::::;:;;;,,'''......       .............        ..;kkkKKOOOOKNWNklkKKKKKXXNX0kkxdoolcccclloxOOdlxKKOkoc:;,.......',,;;:ccccccc::::cl:;clc,',:,',........',;::clllllllllcc::;;,,''''';codxkOO00000OO
;ccc:::::;;;;;,,''......        ..........             'x0OKKKKKKXNWWXxxKXKXNXXNNXK0OkxdoollodxkO0000KXKOkdoc::;..'''''',,,;;::::::::ccl:;cool:;',;,.........',;:cclooolllllcc::;;,,'''',;lodxkOO00000OO
;ccc:::::;;;;,,'''......         .........        .   .,d0O0XNXXXWWWWWKO0XXXXXXXKK0OkxxxddxxkO0KXkd0NNNX0kxoc:c:,..'''',,,;;;:::::::cc:,':odollc,.,'.........',;:cclllllllllcc::;;,,'''',;loxkkO000000OO
;cc::::::;;;;,,''.......         .........        .    .cOO0XXKKNWMMWWWX0KXXXXXKK0OOkkkkxxxkO0KKxlxKNNNNX0xoccccc,......'',;;:::;;;;;;;:loddollc'.''.........',;::cclllllllccc::;;,''''',:ldxkOO0000000O
;cc::::::;;;;,,''......         ...........             .:kXXKO0NMMWWWWWXOkKNNXXK0OOkkkxxxxxkkxddk0XNNWNNKkdlc:::::,..........''',,,;:lodxxdool,.,;'........'',;;:ccllllllccc:::;,,''''',:ldxkOO0000000O
;cc:::::;;;;;,,''......         .............            .cKX0k0NWWWWWWWWXOkO0KK0OOkxxxdooollodk0KXNNNNNK0Odlc:cllc:;,''''''',;;:ccccloddxddooc,,lc'........'',;;::ccclllccc:::;;,,'''',;codxkkO0000000O
;ccc::::;;;;;,,''......        .....................  .....oXKOOKWWWWWWWWWWNK0K0Okdolcc::::ccodk0KXXNNNNKOkdocccc:::,'''''',;;;:ccccclodddoolcclodl'........',,;;::ccclllccc:::;;,,,'',,:codxkOO000000OO
;cc:::::;;;;;,,''...... .      ............................;0NNK0KNWWWWWWWWWWNNNXKK0Okxddooolodk0XXXXNNNX0kxolcc:;;;;'....',;;::ccccllodddooc::clol,........',;;::cccllllccc::::;;,,,,;;cldxkkOO000000OO
;cc:::::;;;;;,''.......        ..........................'..oNWNXKNWWWWWWWWWWNNXXXKK0Okxdolccok0KNNNNNWNXKkxdollllllc;'....'',;;::cclooooool;;:clol,......'',;;::ccllllllccc:::;;;;;;;::lodxkkOO000000OO
;c:::::;;;;;,,''.......        ..............''..........''.:0WWWNNNWWWWWWWWWNNXXXK0Okddl::cokO0KXXXXXNNXKkdoloollcc::;,,,'...',;;::loc..':c;;clol:,',,',,,;;::ccclllllllccc:::;;;:::cccloxxkkkOOOOOOOOk
;cc:::::;;;;,,''........      ..........'''''''''''''''''''.'dNWWWNNWWNNWWWWWNNXXK0Okdl:;:lk00KKKXKKXXXXXKkdoollcccccc:;;;;;,''''',;cl;.   ..,clc:;;;;;;;;::ccclllllllllccc::::;;::ccccllodxxkkkOOOkkkkk
;cc::::::;;;,,'''.......      ..........'''''''''''''''''','.;kNWWNOocdKWWWWWNXXK0Oxl;;:ldk00KKXXXXNNNXKOkxdolc:cllcccc::::;;,;;''',:;..... .':c::::::::ccccclllllllllccc:::::::::cccllloddxxxkkkkkkkxxx
;c::::::;;;,,''''.......      ...........''''''''''''''''''',',o0X0:  :KWWWWNKXX0kl;;:oxkO00KXXXXXXXXK0Oxdooddlc::::cccccccc;,,;;;',;'.........';cccccccllllllllllllccccc:::::::::ccllloodxxxxxkkkxxxxxd
;c:::::;;;;,,'''........      ............''''''.''''''''''''','....  cXWWWWKOKXOl,;oddxk0KKXXXNXXXXXK0Okxxdddolccccccllc:;'..,;::;:;............,cllllllllllllllcccccccccc::::::ccllolodxxxxxxxxxxxxddd
,c:::::;;;;,,'''........      ...........''''''''''''''''''''..  ..   :KWWWWXOKX0d:lkdlc:cloxO0KKKK000OOkxdolc:::::::c:,..  .';:::::'. ...........,:cccccclllllcccccccccclccc:::cclllloodxxxxxxkkkkxxddd
,c::::;;;;;,,'''........      ............''.'''''''''''.''..  ...    .xNWWWN0OKK0xdkkdo:,..'lO0KXK0000kkxdlccl:;:llll,. ..';:::::c:. ....  .......,:ccccclllccccccccllllllllcccclloooodxxkkxxkkkkkxdddd
,:::::;;;;;,,'''.........    .....................'''''''... .....    .cOWWWWXOOXXKOkOOkkkxo:lk0XNNXXNXKXX0xdkkdodxlc;..',;::cc:::c;. ..............';clclllllcccccclloooooollccclooooddxxkkkxkkkkkxdddd
,::::;;;;;,,,'''..........   .......................''',..........    .:xXWWWNK00KXK0O0000KK00OO0KKKKKXKKKOxxkxoolc;,,,;:ccccclc:cc,. ................,cllooolllccccloodooooollcllooooodxkkkkkkkkkkxdddd
,:::;;;;;;,,'''............  ......................'''.... .......    .:xXWWWWNX00XNXKKKKXXXXXXKKKK000Okkkdodolcc::;;:clllcccllcclc,.  ................':odddooolcclloddddddolllllooooddxkkkkkkkkkxxdddd
,::;;;;;,,,,'''............ ......................'................   .;dXWWWWNNK0KXNXXXXXXXXXNNNNNXXK0Okxdooolcccccllooollllllllol;. ..........'........,odddoollclloddddddoolllooooodxxkkkxxkkkkxxdddd
,:;;;;,,,,,'''............. ........................................  .;dXWWWWWNNXKXXNNNXXXXXXNNNNNXXK0Okxddoollcccloodoolllloooooo:. ....................,ldddolllloodddddddolllooooddxxkkkxxkkkkxxdddd
,;;;;,,,,,'''.............. ....................'.................... .,oXWWWWWWNNXXXNNNNNXXXXXXNNXXKK0Okxxxdooollclllolllcclooooool'. ....................'ldddollloodddddddolllooooddxxkkkxxkkkxxddddd
,;;;,,,,''''............      ................','.................  ...'oKWWWWWWNNNNNNNNNNNXXXXXXXXKKK0Okxxddoolllccclllcccllooooool,. ..................'..'cddllllodddddddoolllooooddxxkkxxxkkkxxddddd
';;,,,'''''..........           ....................................   .cKWWWNNNNNNNNNNWWNNNXKXXXKKKKK0OOkxddoolllcccccccccllooooool,........................'collclooddddddoolllooooddxxkkxxxkkkxxddddd
';,,,''''''..........            .....................................  'OWWNNNNNNNNNNNNWWWNNXXXKKKKKK00OOkxdollcc:::cc::cclooddoooo'................','.......;cccllodddddoollllooooddxxkkxxxxkkxxddddd
';,,,''''''.........                  ................................. .oNWNNNXXNNNNNWNNWWWNNNXKKKKKKK00Okxxdolcc:::cc:cclooooooool.................;c;.........,:cloooddooollllooooodxxkkxxxxkkxxddddd
';,,'''''''.........            .. ..................................... ,ONNNNXXXXNNNNNNNWWWNNNXXKKKKKK0Okxxdolcc:cccccclooooooooo:. ...............''............,:lodooooolcclooooodxxxxxxxxkkxxddddd
',,'''''''..........   .       ........  .    .......................'... 'xXNXXXXXXXNNNNNNNNNNNNXXKKKKK0Okxddoolcccllllloooooooool'  ...............''.........'.. ..,:clooolcclooooodxkxxxxxkkxxdddddo
',,'''''''.........................     ...     .......................'.. .dKXXXXXXXXXNNNNXNNNNNXXXKKK00Okdddoolllcclloooddoooooo;.   ..............''..........'..    ..';:ccclooooodxkxxxxxkkxxdddddo
','''.'''...................'...         ...    .......................'..  .ckKKXKKKKKXXXNNNNNXXXXKKK0Okkxddoolccccccclooddooooc'      .............''.............         ..':loooodxkxxxxxxkxxddddoo
.,''''''''...................             ..     ..''..................'..    .;dO0KKKKXXXXNNXXXXXK000Okxddoolcccccccloodddoool:.        .......... .''..........               ..;clodxxxxxxxxxxxdddooo
.'''...'''.................            .  ...     ......''..'..........'..       .:dO0KKKXXXXXXXXXXK0000kxddolccclloooooddool:.          ............''....'....                   ..';ldxxxxxxxxddddooo
.''....''''''.'....'','..  .  ..........   .      .......''.....''........         .':ok0KXXXXXXXXXKKKK00Okxdollllllooooooc,.             ............'...'''...                       ..',;codxxddodool
.''''''''''''''''''...................    ...      .......................             .,lx0KXXXXXKK000OOkxdoooolllloolc,..                ...........,'........    ....          ...        ..;cloooool
.,''''''''''''......................... .......      ............'........                .';:looxO000OOkxxdoollcccc:,.                    ...........''........  .......  .... .....  ......    ..,:loo
',,,,,,,,,'......................................     ...........'..'....                        ..',;;;;;;,,'.....                          ..........'.......  ............. ..... ............    ..,
',,,,,;;,........................................      .........'...''...                                                                     .........''......  .................  .................   
';;;;;;'.......................................... .    .................                                                                      ....... .''.....  ................ ......................
,;;;;,...................................... .........   ................                                                                       .........''.... ................ .......................
,::;'..................................................   ................                                                                      .........''...  ............... ........................
:dl'............................................. .....    ...............                                                                     ...........''.. ............... .........................
oo.    .......................................... .....    ................                                                                   .............'................. ..........................
..    .........................................  ......    ................                                                                  ...... .......'................ ........................  .
........................'....................... ......    ..................                                                               ................'......................................... .
ld,.......... .........................................    ..................       .                                                      .................'......................................... .
dkccxO0Od;..... .......................................    ...................    ...   .                                                 ................................................ .......... ..
,o0NNXNWNKl....  ......................................   .................'...    .......                                                ................................................ .............
cKWXd,cddc,...''........................................  ......................   ......... .....                                       ...................';ccc:,,::c:;;cc;,...........  .............
dNWNk,.....;ok0Kkc......................................  .......................    .............                                      .....................cdcoxodxxxo:oKNXKko,.....'.  ............ .
oXWWNO, .ckXNWWWNOc.....................................  ........................   ................                                  ..................'..'cocoocoxxxlco0XXNWNKo'..... ............. .
'xNWWXo:kNWWWNXOkxo;............... .................... ..........................   ...................                             ..................''.,codddllddddoox0K00KNWNk,...  ............. .
.oXWW0dONWWNKo,...,,'........................... ........ .........................    ....................                           .................'.':clodooc:lcloooxKNNX0KNWNd,.. ................
oXNWKdxXWWWKc................................... ......... .........................   ............                                  ................'...:ddlcdl:cllclolldOKXWX0XWWO;. .................
kNKk;'xNWWWO' .....................  ................................................  .............                                ................... .lxccdkxodc,:dxocxKKKWX0XWW0;  ..............,l:
:c,. .dNWWWXo'.....'c:............. ..................................................  ........................                    .....................;;';:::c:c::clc:okxkOkxO00x' ..............;xko
......;ONWWWN0kdddkKXO,........................................ ......................  .........................                   .'......................................'.''..''...............;o:.l
.......;xKNWWWWWWWWWWXo...............................................................   ........................                  ................................................................,'..;
.........,coxxxOXWWWWXo. .............................. ..............................   ............................             .................................................................::...
...............'lkKX0l.  ..............................................................   .................    ..                 ..'................................................  ....... ....co;..
..................';;.  ....... ..................................''''.................  .......................................  ................................................... ......'...........
......................  ....... .......................  .... .:xO000OOOx:................',;;;;;;;;;;;;;;;;;;;;:::::::::;;;;;,.....................................................  .........'..   ...
......................   .................................... ,OWWWXo',:x0d'.............,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,'.............'cl'....................................  ...........   ....
 ......','............  .................................... .oXWWNO'   ;0Nk,...........'::;;;;;;::::::::;:::c:;:cc:;:cccc:::;............''l0O;......;ddoddookOO00Okl,',;;'''...... ............  .....
   ...,xK0x:..........  ....'...',,,,'........,ldkOx;....... ,OWWWNd...,dXWNk, ...........':ddcoxddkOOkOkddOOxodkkOkdx0Ok0Oxxo,...........,oKWKc.....'dXWWWNNNNNWWWWWNOco0KKK0o..... .;:'........ ......
..  .,lkKNNx. .......   ,oOKKkcoKXXXXk;......l0NWN0c....... .oXWWWNKOk0KNWWXx'  .........;:lOOox0kOKXkoxK00Kd:o0KkOOk00dxKOodo,..........'dKWWXd'....:0WWWNXkl:cdKNWWWNx:xNWWW0:..:l;.,,'........   ....
  . .:kkox0d. .......  .kNWWNk,:KWWWWXl....'dXWWNO;........ 'ONWWWWWWWWWWWWXk:.  ........,:oO0kOOxOXX0kOkxOOl,lkOkkddOkoxOdloc...........oXWWWNO;....dXWWWXo....'xNWWWNx';0WWWNd..dKk,  ........    ....
.. ...,dxol;.........  .d0OOkc..xNWWWNx. .;kNWWW0:..........;0WWWN0xdddkKNWWWXx'  .........,cddoco00Odll::cc:;;:clc::cc:cc:;,..........;dXWWWWWKc...;ONWWNk,....,ONWWWXl..oXWWWO;;k0k;  ........     ...
.. .. .:xkxc. ......   .'..... .:0WWWWO'.:0NWWNO:.......... :KWWWXo. ...:0WWWWXo.  .........',;,;lxdl:,;;;;;;;;;;;;;;;;;;;,'.........',dKNNWWWWNd. .oXWWWXo.....lKWWWNO;..'kNWWKddko;.  .......        .
.  .. .cO0Oko,. ...   ......... .dXWWWKooKWWWXx,.......... .lXWWWK:.... ,ONWWWNd.  .........';;;;::::;;;;;;;;::::::::;;;;;,............;;l0NWWWWO, ,ONWWW0:....'xNWWWNd'...:0WWNXKk;..  .......      ...
..  .. ,kNNXXO;     .''. .... .. ,ONWWNNNWWNKl....';;,.... .dNWWWk'  ..'oXWWWWKc    ..........'''........................... .............dNWWWWK:.lXWWWNx'....;ONWWWKc.....oXWWWNo...  .....'.      ...
..   ..;dxkOOd,......,'. .........cKWWWWWWNO:. .;xKNNKd. . ,0WWWN0olodkKNWWWWKl..   .......   ...............       .        .............lKWWWWXo;kWWWWXl..'..lXWWWNk,.....:0WWWXc...  ....,:'         
...  .................'. ........ .oXWWWWNx,.. ,ONWWWN0;  .lXWWWWWWWWWWWWWNKx:....   .......  ............                  ..............,cooool:;oxxxxo,.''..o0XXXKl......lKWWW0;...  ...':c'..      .
   ..................... ........ .lXWWWXx' .. ,ONWWN0l.  .xXNNNXXXXXKK0kdl,.......   ......  .....      .                  .............................'','..,,,,;,'....,dXWWWKl..'.  ...:l:,,.     ..
     .................    ........lKWWWXo.......;odoc'.   .,::::;;;,,,,'.......'............  ........                      ....................'''''''',''''''''....'...cONWWN0l...,.  ..;dl'..      ..
..      ..............    ..... .lKWWWKl................   ..............'....'...;l:. ...... ........                     .................''''','''''''',,,''''''''..,oKWWWNO:....,. ...lx;         ..
....      ............    ......lKWWWKl..................  .........'''..''..'...c00o' ......  ..........                  ...............''''''',,,''''',',,',',,,'..:kXWWWXd,.'..',. ...''.           
,........    .........    .....c0WWWKl...................  .........''..'''....'dXWXk:. .....  ......                      ..............'''''''''',,,'''''',,,,','''lKNWWN0l..''..''. .....           .
:, ........    .......     ...:0NWWKl..................... ......''........'..;kNWWW0c. .....  ....                       ..............'',''''''''',,,'''''''''','':dO000x;..','..,'.......            
,. ..........    .....     . 'kNWWXl. ....................  ..................lxkOOOd'  ......  ... .                     ..............'','','',''''''''''''''''',''''',,''',,''..,. .....           ..
............... .......  .. ..:ccc;...................................................  ................................  .............................................................................')";
    cout << npass << endl;
}
}