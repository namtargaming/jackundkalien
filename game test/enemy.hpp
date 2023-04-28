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
};




