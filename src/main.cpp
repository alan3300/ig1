//Alan Verrua

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

enum precios {jarra=100,platano=8,espatula=75,taza=25,libro=40};

void michisentado(){
cout << R"(                                                            
                                                           
                                                           
                                                           
                             ,cc;.                .'.      
                            :XMMWKxc.          ,oOXXc      
                            dMMMMMMMXd.      .xNMMMWo      
                            dMMMMMMMMM0xxkkdlOWMMMMX;      
                            dMMMMMMMMMMMMMMMMMMMMMM0'      
                  ...,:::::cOMMMMMXkddxKWMMMWXK0KNMd        
             ':oxk0XNWMMMMMMMMMWOc''::..xWMXl,;:';xc        
         .;dONMMMMMMMMMMMMMMMMMWx:xXWW0cxWM0cdNNOco:        
        ;OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:        
       '0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0:        
      ;OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKc.          
    .oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO.          
    :XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.          
    dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc          
    :XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd          
     cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWo          
      'oKWMMMMMMMMMKddkk0XXXXXXXXXXX0kk0XWMMMWKxc.          
        .,:cddddddd:    .............  ..,:::,.            
                                                           
                                                            )";
}
void michimirando(){
cout << R"(                                                            
                                                           
                                                           
                                                           
                                                           
            ,dd;                         ;d,                
           .kMMWx.                     .lNNc                
           :NMMMWO,                   'kNMMx.              
           lWMMMMMNd.               .cKMMMMX;              
           '0MMMMMMWx,........      oWMMMMMN:              
           .kMMMMMMMWNXXXXXXX0OkxdcdXMMMMMMN:              
           .kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:              
           .kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:              
           .kMMMMM0c;;;:dONMMMMMMWXkoooxXMMO.              
           .xWMMMMKxxOxl,.,kWMMM0:'';ll:kWMd                
            oWMMMMMMMMMMWk,:KMMWd,dXWMMMMMNc                
           '0MMMMMMMMMMMMMNXWMWWWNWMMMMMMMK,                
           oWMMMMMMMMWOd0WWN0o;:OMMXxOWMMMx.                
          'OMMMMMMMMMWx,,;,,,....::'.lNMMWl                
          cNMMMMMMMMMMWNKOkOKXX0kxkxONMMMMk.                
         .xMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK,                
         :XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMX;                
        ;KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd                
       ;KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMx.              
      .OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.              
      :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.              
      :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK,              
      ;XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWl              
      .kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.            
       dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK,             )";
}

void ppal(){
            cout << R"(
WWWWWWWWMMWWMWNO0WNx:kWW0cdWMKdOWWMMWWMWWMMWWWWWMWWWWXOxoc:;,,''',;:coxkKWWWWWWWMWWWWMWN0OOd'                   .:doxNWM
WWWWWWWWMMWMMMWWWWW0kXMWKk0WWWWWWMWWWWMMWWWWWWWMWXko::;;cloxxxxxxxxoc:;,,;cx0NWWWWWWMMWWNXWXc                   'ckWMMMM
WWWWWWWWMMWMWWWWWWMMWWMMWMMWMWWWMMWWWWWMWWWMWN0dc;:lkKXX0OOOO00OOOOkOOOOkxl;,;o0WWWWWWMWxlkkc.                 .:xkokWMM
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMMWWWWMWWWNk:,:xKNWXOOOOKXNWWW0kOOKKOkOOOO0Od:,:kNWWWWMNXWWWl                 :XWXk0WMW
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMWWNk:,o0WWWXkdk0KNNO0WWW0xO00000O0XK0OOK0l,:OWWWMWW0ddo:;.            'lddoOWWWMW
WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWKl,l0NWWXOxcx0kKWWxdKNWWKKWWKOKX0k0WN0k0W0c,lKWWWWkoKWMNc.,.      ...dWWXxOWWWWM
WWWWWWWWWMWWWMWWWMWWWWMMWWWMMWWMWWWWWWWO;;xOOXWKxOKxkOkNNW0lckWWWWWWWOxKWX0XMWKxOWNk';0WMWWMWNOcdXWx':xx;cKXxldXWMWWMMWW
WWWWWWWWWMMWWWMMWWWMMWWWWWMMWWMMWMMWWWO,:OkkNW0d0WWkdxxOOKNo.:kXWWWWN0kkKWWXKNWKxOWW0,,OWWWWMW0kKMKclNWWocKWWkoKWWWWWWWW
WWWWWWWWWWMMWWWMWWWWWWMWWWMMWWMWWMMWW0,;OkkNWXxOWWKkdooddokdc:cxXWWWWkx0OKWNKO00ddKWWO';KWMWWWWMMMKxOWWNOkXWWMMMWWWWWWWW
WWWWWWWWWWWWWMWXKKk00OXXNWMMWWMWWMWWX:.kX0XWMOxX0OockNNK00000OkxkOOO0xokXNKOKXkdocxKKXl.dWWWWWMWWWWMMWWMMWWMWWWWWWWWWWWW
WWWWWWWWMMWWWNKkc....';lOXWMWWMWWWMWd.:XWWWWMOxOdolkWWWWWWWMMWWWK0kO0KKOkOkdokOdc:xdlo:.cNWWWWMWWWWMMWMWWMMWMWWWMWWWWWWW
WWWWWWWWMWWWN0x;       .lONMWMMWWWWK; oWWWWWWKxl:lOWWWWWWMWWMWWMWWWWWMWWNKOkkxdocoOoodl,:XWWWWMWWWWWWWWWWWWWWWWWWWWWWWWW
WWWWWWWMMWMWXOc         ;kXMWMMWWWMK, oWNNWWWWKl'oWWNkolOWMWMMWWMWWWW0ookXWWWOlldKXOxdx,;XWWMWMWWWWWWWWWWWWWWWWWWWWWWWWW
WWWWWWWWMMWWNKx'       'd0NWMMWWWWWX: lKk0MX00OxcxWWWXkoOWMWWWWWWWWWWOokXWNWWO:ckOOXWW0,;XWWMWWWWWWWWWWWWWWWWWWWWWWWWWWW
MWWWWWWMWWWWMX0x:'....:x0XMMMWWWWMWWk.'OxkXxx0xdcxWWWx'cXWWWWWWNXWWWWXl'dNWWWOclxOxxXWk'lNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
WWWWWWWMWWWWWWWXK0kOk0KKWWWWWWWMWWWWNl.dkx0xOKddccOXW0okNWWWWWWOkWMWWNkoOWWNOc;ld0OxKWl:KWWMWWWMMWWWWWWWWWWWWWWWWWWWWWWW
WWWWNkx0NWWWWWWWWWWWWWWWWWWWWWWWWMMWWKc;kkxOxkkkolxxOXNXOkdollc,,:codxOKNWXkkocdkkx0NxcOWWWWWMMMWWWWWWWWWWWWWWWWWWWWWWWW
WWWWWKdloxOKWWMWWWWWWWMMWWWWWWWWWMMWWWXxlk0KNXKK0okXd,,.               .;ldOXdxK0XWNd;xWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
WWMMWWWX0kolok0XWWWWWWWWMWWWWWWWMWWMWWWW0dkXWWMWWkoKx.                   .xXxxXWWWKl,xWWWMMWWWWMMWWMWWWWMWWWWMWWMWWWWWWW
WWWWWWWMWWNKOl,:coxO0XWWMMWWWWWWWWWWWWWWWNOxONWWWWOd:.                   .ldxKWWNk;:OWWWWWMWWWMMMMNKKXk0WOONXNWWWWWWWWWW
WWWWWWWWWWWWWO:c;':,':okKWWMWWWWWWWWWWWWWWWXkxOXWWWKc''.               ...;kNWXxc:dXWWWWWMMWWWWMNXXxc:',;'cdoOWWMWWWWWWW
WWWWWWWMWWWWWXl;dxOko;,,'kNWWWWWWWWMWWWWWWMWNx,;d0Okkkxc,'.............cxkkdoc;ckXWMWWWWWMMMWWWMXOd;        .lOKWWWWWWWW
WWWWWWWWMWWWWW0c;okOOxxl.'cxOKNWWMNK0XWWWWNOlclcdOxxxdo;oK00OOOOOOOOOc,clxkkd'.kNWMWWMMMMWWMMWWKOk'          :OOXWWWWWWW
WWWWWWWWWWWMMWWNOl''::,,:co:,;lxkOocolodxxc,c0Xdl0NKOOkxxO000OkkkO0OOxxO00OOkxocoKWWWWWMMMWMMWWKOc           .lOXWWWWWWW
WWWWWWWWWMMWWWWWWNd'lOOkxkkxkxl:::dXWN0x:,o00Okc,ldodOXWWNK0OOk0XNNKO0XNXkdxKNWKl:xNWWWWWWWWMWWKOO,          cO0XWWWWWWW
WWWWWWWWWWWMMMWWWWXl'oOOOO0NWWK:'xNWWWWXxONKKWWKOkdloxO0KOolllokKKOkxkOOO0XWNNXKXkclONWWWWWWWWWMKkx:.      .ox0NWWWWWWWW
WWWWWWWWMMWWWWWMWWWXc,kWMNOKMWWKxdkXWW0okNOkXWNNNNNKOOkxxk000ddddKKKXXX0O0XWKkox0KXx:oXWWWWWWMWWNNNkxo;c::ddOXNWWWWWWWWW
WWWWWWWWWWWWWWWWWWMMXc,OWWKOKNWXkdc:odlkNOx0NNWWWWWWWWWX0OOOOoddkWWWMWWWXkkXWk:oOXWW0::OWMWWMMWWWMWXN0OWK0NXKWWWMWWWWWWW
WWWWWWWWWWWWWWWMWWWWWXc;OWWXOKWXkOOo..xNOxkOKXWNNWNNWWWWWWWX0OkddOKNWWWWWkdXNKdxWMWWMKc,xNWWMMWWMMWWMWWWWWWMWMMWWWWWWWWW
WWWWWWWWWWWWWWWWWWWWWMXl;kWWXO0XNWWO;oNNOxxOkOXO00OXNXNWWWWWWWWWX0OO00KNWX000kdoON0KWWXc'kWMMWWWWWWWWWWWWWMMMMWWWWWWWWWW
WWWWWWWWMWWWMWWWWWWWWWWNd:kWWWKkKWWXOxkO0K0Okkdd0xONOOWWWWXXWWWWMWWWX00OO0KNXKOoldok00XO,:XMMMWWMMWMWWMWWMWWMWWMWWWWWWWW
WWWWWWWWWMWWWWWWWWWWWWWWNklkWMWKOKWWNklk0OOkOK0OkxOdxNKKWKkKWWWWXXWNNWWWX0OOOOOdcokO00XNl.xWWMMMMMMMMWWWWWWWWWWWWWWWWWWW
WWWWWWWMMWMWWMWWMWMWWWWWMWkckWWWXKWWNl:0WWN0ookO0KKOOOdk0k0X0XW0x0WWNNWWWWWNkccokWWMMWWWx.oWKxk0NWWWWMWMMWWWWWWWWWWWWWWW
WWWWWWWWMWWNKNWN0XWWWWWWWWNx;oXWWWWMXodNWWW0dONKOOOk0KK0kxxolOKxkNWWO0WWWNOxkOOkKWWMWWWMO.:k;';'lXWWWWWMWWWWWWWWWWWWWWWW
WMMMWWW00WNkoKMOl0WXXWWWWWMWO::xNWWMWXNWWXo:kWWWWWNxdOOO0K0kxkdoxONOxOOOxxOXWWWWWWMWWWWWO'..,xl,kWWWWMMMWWWMWMWWWWWWWWWW
MMWWWWWOooc;;cl':OOdxNWWWWWWWXd;:xXWWMWXx,.lNWWMMWMKkKNK0OOxdkKk::o:ol:dkkk0WWMWWWMWWN0xdd;;kl,xNWWWWWMMWWMMWMMWWWWWWWWW                                                                                                                                                   
)";
}

void lucha(){
    cout << R"(                                                                                                                                                                         
            ..   ..                                                                        .                            
       ..   ''  .;.                                                             .;c,      .co,                          
       .;',;co;:dc...'.                                                .'.       ':.      .:;.                          
    ..  ,kKKNMMMMN0ko;. ..                                            .lk:   ... .;.      :c.      ',.                  
     .,o0WMMMMMMMMMWN0:.'.                   .....                      ':.  ;c' 'kd,...,o0o.     .:;'.                 
  ....oNMMMMMMMMMMMMMXc....                .lOKK0ko,                     ,dc.,oloONWXK0KNWWKd;.';:'                     
  ...cXMMMMMMMMMMMMMMMOc''.               .dNMMMMMNl.           'c'      .xNKKNNWWWWNNXNWMMMWNXX0;.,;.                  
  ...;KMMMMMMMMMMMMMMM0c.                 ,OMMMMMMWd.           ':;..   .lKWWWWWWWNkl;,:ld0NWMWWXdllc:.  'ol.           
  .'..dNMMMMMMMMMMMMM0c..'.               .:0WMMMNd,.              .:lookKWWWWWNNWk'      .dNWWWNXKkooc,',;;.           
     .;kXWMMMMMMMMMW0c..                    .:lll;.                 .dXOl,cONNWNNWo.   .',:xNWWWWWWWNx,.                
    '.. 'x0KWMMMWNXk.  '.                                  ...      .do.   .xXNNXNx.  .dKN0OKXNWWWWWNc                  
       .'..'oo;cl,.',.     ..                             ,ddl,'.',:ONOlc;  :XWWWW0'  cdxXNOlxNWWWWWW0c'.  .,;.         
       ..  ,,  .,.  ..    'o;                             ......':xXWWXOO:  'ONNWWO' .dl,oocxKNNWWWWWWXd,..':c'         
           ..   .        ;0x.                                     .oNW0xl,'..oOOOk:  'o;.;oOXKKNWWWWWNO:',.             
                        cXX:        .:lc.                          ;KWKxcckkO0XXKOxddddoxKNWNKKNWWWWWXd'.;'             
                       :XNl     .,lxXMMWl                  ...  ..;kNWWWXXNWWMMMMMWWWWWWWWWNOdk0NWWWWW0c.               
                      ;KWo.    .kWMMMMMMx.                .:dl;..,:o0NWWWWWNXK0KXNNNNNNNXKXXx;ckXWWWN0dl:'.';;.         
                     ;KWd.    'OWMMMMMMMNo.                .'.      .kWWWWKkkd;ckd:ckxok0l:dd:c0NWWWO,     .cc.         
                    .OWd.     'OMMMMMMMMMNo  .                       lNWWWWNKOd::;,:llodxc,ll;oXWWWWk.                  
                   .dNd.       .dNMMMMMMMM0,;0Oc'                  .ck00XWWWWX0dldkdldOx:',ok0NWWNOxdc'.                
                   lXx.          cOXWMMMMNd.lMMMNOolll,        ';;,,'...,oKWWWWXXNNWNXK00OOXNWWW0c.  ..';:.             
                  ;Kx.             ;KMMMWl .xMMMMMMMMMX:       'l;        cKNXNNWWWWWWWWWWWWWNNXl       ';.             
               ..,kd.              .xMMW0;.oNMMMMMMMMMMK;                .cl,',lONNXK00KNN0dc:cxo.                      
              .:kXKl.             'oXMMWk:oXMMMMMMMMMMMM0,             .',.     ,kx;...'ok;     ',.                     
             .kNMMk,.           ,xXMMMMMXoxNMMMMMMMMMMMMMO'           .:l'      ,:.     .;.      'lc.                   
             cNMMMx.          .dXMMMMMMMM0lxWMMMMMMMMMMMMWO'            .      .:.       ;,      .'.                    
             .ckNMXkl'      .lKMMMMMMMMMMWkckWMMMMMMMMMMMMMx,.                .cc.      .;,.                            
                :KWMMNkc. .:0WMMMMMMMMMMMMWxcOWMMMMMMMMMMMMWNo                                                          
                 .oXMMMWKk0WMMMMMWWMMMMMMMMNx:kWMMMMMMMMMMMMMX:                                                         
    .cdddl;.       'oKMMMMMMMMWKo;lXMMMMMMMMNk:dXMMMMMMMMMMMMMd                                            .. .         
  .;kWMMMWXl.        'xNWMMWKd;.   :XMMMMMMMMM0coXMMMMMMMMMMMMx.                                         ,oxxxd:;.      
 ..oWMMMMMWx.          ':dl;.      .kMMMMMMMMMMXdoKMMMMMMMMMMMx.                                      ..:0WMMMMWKc.     
  .:OWMMMWO:.                      .kMMMMMMMMMMMXo:kNMMMMMMMMMd                                       .,0MMMMMMMWx..    
   .':oxoc'.                       ;KMMMMMMMMMMMMWKxkOKWMMMMMNc                                        .kMMMMMMMNd..    
                                 .lKMMMMMMMMMMMMMMMMWKkxoodddc.                                        .,kNWMMWXo..     
                                :0WMMMMMMMMMMMMMMMMMMMMNOl.                     ..  .. ..                .,cllc,.       
                              'xNMMMMMMMMMMMMMMMMMMMMMMMMMXxo:.                 .,;:oocdl...                            
                            .lXMMMMMMMMMNkc;,:oOXWMMMMMMMMMMMWKd,             ..'xNNMMMMWXOl'..                         
                           'xWMMMMMMMMNx,       .;okXWMMMMMMMMMMNo.         .. cXWMMMMMMMMMK;..                         
                          ;KMMMMMMMMXd'             .;okXWMMMMMMMNl         ..'OMMMMMMMMMMMWd'..                        
                          :NMMMMMMXo.                   .;kWMMMMMMNc        ...kMMMMMMMMMMMNx,.                         
            .,;..         ;XMMMMMO'                       .;coKMMMMK;       ...lNMMMMMMMMMWO,...                        
          .l0NNXd'        '0MMMMMd                            lWMMMMO'       ...;xXNMMMMWXo...                          
          ;0MMMMKc.       .OMMMMMd                            ,KMMMMMx.         .'':dllo;,,.                            
          .l0XNKo.        .kMMMMMd                             dMMMMMX;         .. ..  .. ..                            
            .','           oWMMMMo                             :NMMMMMx.                                                
                           :NMMMMl                             .kMMMMMXc                                                
                           .kMMMWc                              lWWMMMMNk:.                                             
                         'cxXMMMN:                              .;,o0KKXXX0d;.                                          
                      .;lxOkxddoc.                                  .......'..                                                                                                                                        
)";
}

void michifinal(){
    cout << R"(                                                            
                                                           
                                                           
                                                           
                         'ccc;'.                            
                       .lXMMMWNd.                          
                       ;XX0XMNKk'                          
                       cNXkk0OOO;                          
                       .dNK00Oko.                          
                      .:0WMMMNKx,                          
                     .oWMMMMMMMMNd.                        
                     ;XMMMMMMMMMMX:                        
                     :NMMMMW00NNKXd                        
                     :NNOdol..''.:l.                        
                     :Kl         .;.                        
                     ,x;       ..oO;                        
                      lKxlccoxk0XWWO.                      
..                    .xWMMMMMMMMMMWl                      
.......................;dddddddddddd:.......................
                                                           
      'cc'                ....                ..........    
     .:;cc        ,;.    ,;..';.   .,...,.   .col'......:;.
   .';;.,;.      'c:'    ;,  .c;. .:,.'.;;    'dl,'. ..,od'
  .cl;,.,cdc    .;.';    ':. .c;.  .:''clo:.  .:oc;'.'',cx:
  ,ccc'.':dk'   'c.':.    ':..c:.   ':cllxl:.  ;c'.....''cc.
  .;,;'.';c:.    .:;;,     .;..;,   .;:;,;;c'  .:'     .';.
    .''..'.       .;;:.    .;. ,;    .''.,:'    .,'..''''.  
                   ..,.     ;;.::.                          
                             ...                                                                                       
)";

}

void michienojado(){
    cout << R"(


      ..                                  .'',.      
 ;c;,,;'                             .',..c:      
'l' .',;::.             ..... ......::,. 'l.      
'c.  ..';ccc,  .'',;;;;:,';:;,,;;;co,.   ,'      
.l,..   ,:..:;,cc,.....          .',.   ..        
 'lc'.   .'....,.                 .'.  .c'        
  ;o;.   ......     ......   '. .. ';,'.;o'      
   ;d:.. .,.     .'..:xc''''','... 'dd;. ,l'      
    ;c.  ,:.  .. .'..c0d,''''.  .. .::.   .:.    
    .o: ..  .'.    .,'..... .. .''  ,'  . .l,    
     ;,  ...,.   ....  .....'.  .;' '' .'.;:      
    .l' ':...   ....      .....  ':;:' ', ';      
    ;o. ,'  ......   ....  .';;;ll;;c:;.  .o,    
    ,l.            .;,',,',,,cc,',. .,..  .o,    
    .o;            .:. .     .,'. '.  .'  ,:      
     ,o'            .,:::;,....'  .,. ...;:.      
      ':'             ';ccccc;;.  .,.',.;:.      
       .ll.             .';:,,:, .::,c:,.        
        .;ccc:..           ',.,:,,;cc:.      
           ..,;:cc;;,'''''','.,'..,c.      
                 .',,;;::ccl:''',,,.  
)";
}

void titles()
{
  cout << R"(

  /$$$$$$                       /$$       /$$     
 /$$__  $$                     |__/      | $$     
| $$  \__/  /$$$$$$  /$$    /$$ /$$  /$$$$$$$     
| $$       /$$__  $$|  $$  /$$/| $$ /$$__  $$     
| $$      | $$  \ $$ \  $$/$$/ | $$| $$  | $$     
| $$    $$| $$  | $$  \  $$$/  | $$| $$  | $$     
|  $$$$$$/|  $$$$$$/   \  $/   | $$|  $$$$$$$     
 \______/  \______/     \_/    |__/ \_______/     
       /$$  /$$  /$$  /$$$$$$   /$$$$$$   /$$$$$$$
      | $$ | $$ | $$ |____  $$ /$$__  $$ /$$_____/
      | $$ | $$ | $$  /$$$$$$$| $$  \__/|  $$$$$$ 
      | $$ | $$ | $$ /$$__  $$| $$       \____  $$
      |  $$$$$/$$$$/|  $$$$$$$| $$       /$$$$$$$/
       \_____/\___/  \_______/|__/      |_______/  
       
       )";
}

void juego(){}
void creditos()
{
    cout << "Alan Verrua > Materia IG1. Juanjo Tirigal" << endl;
    cout << "Abril 2022." << endl;
    cin.ignore().get();
}

void salir()
{
    cout << "Chauchis, nos vimo' en Disney!";
    exit(1);
}
enum Formas{
    directo = 1,
    indirecto
};

void optLucha()
{
  int formaPelea;
  Formas forma;
  string respuesta;
  lucha();
  cout << "Eres Valiente!" << endl;
  cout << "Has dedicido enfrentarte a la nueva cepa COVID-SARS-22!" << endl;
  cout << "Presiona 'Enter' para comenzar la batalla...";
  cin.ignore().get();
  system("clear");
  ppal();
  cout << "Tenemos diferentes formas de pelea, elige la que desees:" << endl;

  cout << "[1].Golpe directo" << endl;
  cout << "[2].Golpe indirecto" << endl;

  cin >> formaPelea;
  system("clear");
  switch (formaPelea)
  {
  case directo:
      michimirando();
      break;
  case indirecto:
      michisentado();
      break;
  default: cout << "Elige la opcion indicada [1] o [2]" << endl;
      break;
  }

  if (formaPelea == directo)
  {
    lucha();
    cout << "Has elegido la forma de pelea ***GOLPE DIRECTO***" << endl;
    cout << "Presione enter para continuar..." << endl << endl;
    cin.ignore().get();
    system("clear");
    
    cout << "Pero vamos a darle una oportunidad al anciano."<<endl;
    cout << endl <<"Presione enter para continuar...";
    cin.ignore();
    system("clear");
    michisentado();

    cout << "Primero necesitaría que limpie el piso,¿podría empezar por ahí?" << endl;
    cout << endl <<" Responda si o no: ";
    cin >> respuesta;
    system ("clear");
     
    if (respuesta=="si")
    {
      cout << endl <<"  *Barriendo rompiste una botella*"<<endl;
      michienojado();
      cout << endl <<"   ¡HICISTE TODO MAL KAREEEEN! Estas despedido."<<endl << endl << endl;
     
    }  
    else
      {
        cout << endl <<"  *Hiciste enojar al michi mercader*"<<endl;
        michienojado ();
        cout << endl <<"   ¡¿ENTONCES PORQUE ME HACES PERDER EL TIEMPO KAREN?! Estas despedido."<<endl << endl << endl;
      }
   }
    else
      {
        ppal();
        cout << "  ¡¡MUY JOVEN!! No aceptamos bebés."<<endl<<endl;
        cout <<" Presione enter para continuar..."<<endl;
        cin.ignore().get();
        system("clear");
        michisentado();
        cout << endl << "  Pero podría darte un trabajito, por favor acepta acariciar mi pancita"<<endl;
        cout << endl <<"  Al presionar enter estas aceptando acariciarle la pancita..."<<endl ;
        cin.ignore();
        system("clear");
        michienojado ();
        cout << endl <<"   ¡NADIE ME PUEDE TOCAR LA PANCITA! Estas despedido Karen."<<endl << endl;
      }
  cin.ignore();
}

void optacariciar()
{
  michisentado();
  cout << "\n\nBueno, pero que sea solo un rato eh\n";
  cout << endl << endl <<"  Presione enter para continuar..."<<endl<<endl;
  cin.ignore().get();
  system("clear");
  michifinal();
  cout << endl << "   Presione enter para continuar..."<<endl <<endl;
  cin.ignore();
}

void optmirar()
{
  ppal();
  cout << "\n\nAdelante joven, pasele pasele\n\n";
  cin.ignore();
  cout << "\nAquí puede ver los precios: \n\n 1:Jarra="<<jarra<<"\n 2:Platano="<<platano<<"\n 3:Espatula="<<espatula<<"\n 4:Taza="<<taza<<"\n 5:Libro="<<libro<<endl<<endl;
}

void optnada()
{
  michimirando();
  cout <<endl << endl<< "¡¿ENTONCES PORQUE ME HACES PERDER EL TIEMPO?! Vete de aquí."<<endl<<endl;
  cin.ignore();
}

void optaBatalla(){
  cout << "*** ¡Humanos VS Esqueletos! ***\n"
       << endl;

  // Propiedades de los Humanos:
  float ataqueHumano = 0.6f; // 60% de acierto
  float saludHumanoMaxima = 250.0f;
  float cantidadDanioHumano = 200.0f;

  // La salud irá disminuyendo a medida que reciba impactos:
  float saludHumanoActual = saludHumanoMaxima;

  // Propiedades de los Esqueletos:
  float ataqueEsqueleto = 0.4f; // 40% de acierto
  float saludEsqueletoMaxima = 50.0f;
  float cantidadDanioEsqueleto = 40.0f;
  float saludEsqueletoActual = saludEsqueletoMaxima;

  int cantidadHumanos;
  int cantidadEsqueletos;

  // Para los valores aleatorios:
  random_device random;
  default_random_engine semilla(random());
  uniform_real_distribution<float> ataque(0.0f, 1.0f);
  float resultadoAtaque;

  // Variable para los turnos (H -> Humano):
  char turno = 'H';

  cout << "Ingrese la cantidad de humanos: ";
  cin >> cantidadHumanos;

  cout << "Ingrese la cantidad de esqueletos: ";
  cin >> cantidadEsqueletos;

  // Guardamos los valores iniciales para después poder hacer la cuenta
  // de cuantos murieron.
  int cantidadHumanosInicial = cantidadHumanos;
  int cantidadEsqueletosInicial = cantidadEsqueletos;

  // Ciclo while con el proceso de lucha:
  cout << "\nComienza la batalla!\n";

  // Mientras alguno de los bandos esté con vida.
  while ((cantidadHumanos > 0) && (cantidadEsqueletos > 0))
  {
    // Tirar dado para la cantidad de ataque:
    resultadoAtaque = ataque(semilla);

    // Trabajamos con estados.
    // Turno humanos:
    if (turno == 'H')
    {
      // Verificar si el ataque tuvo éxito:
      if (resultadoAtaque <= ataqueHumano)
      {
        // Restarle salud al esqueleto actual:
        saludEsqueletoActual = saludEsqueletoActual - cantidadDanioHumano;

        // Verificar si muere el esqueleto:
        if (saludEsqueletoActual <= 0)
        {
          // Es lo mismo que:
          // cantidadEsqueletos = cantidadEsqueletos - 1;
          cantidadEsqueletos--;

          // Aparece otro esqueleto.
          saludEsqueletoActual = saludEsqueletoMaxima;
        }
      }
      turno = 'E'; // Cambio de estado
    }
    else if (turno == 'E')
    {
      if (resultadoAtaque <= ataqueEsqueleto)
      {
        // Restarle salud al humano actual.
        saludHumanoActual -= cantidadDanioEsqueleto;

        // Si muere el humano.
        if (saludHumanoActual <= 0)
        {
          cantidadHumanos--;

          // Aparece otro humano.
          saludHumanoActual = saludHumanoMaxima;
        }
      }
      turno = 'H'; // Cambio de estado
    }
  } // -Fin while

  //Mostramos quien ganó:
  cout << "\nLa batalla termino...\n";

  if (cantidadHumanos > 0)
  {
    cout << "\nLos humanos ganaron!!!\n"
         << endl;
    cout << "Quedaron " << cantidadHumanos << " humanos con vida!" << endl;
  }
  else
  {
    cout << "\nLos esqueletos ganaron!!!\n"
         << endl;
    cout << "Quedaron " << cantidadEsqueletos << " esqueletos de pie!" << endl;
  }

  // Mostramos cuantos humanos y esqueletos murieron.
  cout << cantidadHumanosInicial - cantidadHumanos << " humanos perdieron sus vidas y " << cantidadEsqueletosInicial - cantidadEsqueletos << " esqueletos fueron destruidos.\n";

/*   
  cout << "[1].Batallar Nuevamente" << endl;
  cout << "[2].Volver al inicio" << endl;
  cout << "[3].Salir" << endl;

  int opciones;
  switch (opciones)
  {
  case 1:
    optaBatalla();
    break;
  case 2:
    juego();
    break;
  case 3:
    salir();
    break;
  default:
    break;
  } */
  
}

int main()
{
  int menu;
    cout << "Opciones" << endl;
    cout << "[1].Juego" << endl;
    cout << "[2].Creditos" << endl; 
    cout << "[3].Salir"<< endl;
    cin >> menu;

     switch(menu)

       { case 1:
             juego();
             break;
         case 2:
             system ("clear");
             creditos();
             break;
         case 3:
             salir();
             break;   
         default:
             cout << "Debes ingresar las opciones 1, 2 o 3" <<endl; 
             exit(1);
      }
  
  int opt;
  bool repeat = true;

  while (repeat==true)
  {
  string nom;
  titles ();
  cout << endl << "¿Cómo te llamas? ";
  cin >> nom;
  cout << nom;
  cin.get();
  system ("clear");
  cout << R"(                                                                                                                                                   
                                                         .          ..                                                  
                                                     .,:lc.        .cxd;                                                
                                                     .'oo.          ;xc.                                                
                                         ,ld;          ';.         .c:         .                                        
                                        .:dOc    .,;.  'o'        .ld.        .ll,.                                     
                                           ,l,   'oo.  :0k;.    .,xNk.       .;c:;.                                     
                                            'xl.  ;o,,oKWWN0OOkOKXWWXx,.   .::'                                         
                                 .,.         oN0dokKXNWWWWWMMWWWWWWWWWN0xdkOl. ..                                       
                                .ok;         lNWWWWWWWWWWXNNKOkKWWWMWWWWWWWK, ,doc.     ..                              
                                .::;,'.    .lXMWWWWWWWMMXoc;...;c:oONWWWWWWXkodlcc,   .lOx'                             
                                    .;ooc:oONWWMWWWWNNMWx'         .lXWWWWWNXK0o:ccc:;;:cl'                             
                                      'OWWWOod0WWWWWNXWNl          .lKWWWWWWNWWWNXk:.                                   
                                       oKd:.  .dNXXWNKNWl      .cxxdkKNWWWWWWWWWWd.                                     
                          .,'         :0x.     .dXKNWXNWd.    ,d0NWNOOK0XWWWWWWWWx.                                     
                          ,OOo;,'...'lKWNd:lc.  ;KWWWWWWO'   .dolKNWNd;oXWWWWWWWWNd'.     .:,                           
                          .;,..,;cd0XNWWWKk0d.  .OWNNWWW0'   .ko'o00l;dXWWWWWWWWWWWXkc,'.,ldo'                          
                                  .,xNWWNkkO,.   oN0OXWNl    ,0l .;;:ONXKXNWWWWWWWNk,      .,.                          
                                    .kWWKol:.lc..;x0kxdc.  ..:o,.'lOXNXK0NWWWWWWWWKd,,:l.                               
                                    .dWWXko:;kK0KXNWNXK0Oxxkkxood0NWWWWXKXWWWWWWWW0;..,c.                               
                           .       .c0WWWWNKKXWWWWMMWWMMMWWWWWWWMWWWWXOk00XWWWWWWWNd.                                   
                           ;oc;'.,:oOXWWWWWWWWWWWWMMWWWWWWMWWWWWWWNXXKl':lOWWWWWWWNX0o:'.  ..                           
                           .oo,.    .,kNWWWWWWXOOOolxOOOOOKKK00KKOxOXWx.cxOWWWWWWO:.'.'',;oko.                          
                            ..        .xWWWWWXOdxd:,:kk,..dOkc,oKO;':dx,,xXWWWWWO'        ,o,                           
                                       cXWWWWWWN0kOx,cc.,:od;;llo0c.cl:':KWWWWWWk.                                      
                                     .:OXWWWWWWWWX0kl::cxc':lxNK:',.lOxxKWWWWWXKKx,                                     
                                   .;looc:lkXWWWWWNNK0XNX0kO0OOOx:;cokKWWWWWKl'.';:;'....                               
                               ,dol;'.      ,dXWWWWWXNNNNWWWWWWWWNNWWWWWWWNk,       'ldl.                               
                               .co,          .kNNNNWWWWWWWWWWWWWNWWWWWWWWWK;         ':.                                
                                             ,kx:,;cxKNWWWWWWWWWWNWN0kollkKo.                                           
                                           .,:'      ,kNKdl::;;ckXXo.     ,l;.                                          
                                        .':l;        .xO;        cx'       .::..                                        
                                        .;od,        ,o'         .;.        .oxo'                                       
                                           .        .c,          .:,        .,;.                                        
                                                  .;dx;          ,ll,.                                                  
                                                   .,;'         ....                           
 ____  _                           _     _            
 |  _ \(_)                         (_)   | |           
 | |_) |_  ___ _ ____   _____ _ __  _  __| __  __      
 |  _ <| |/ _ | '_ \ \ / / _ | '_ \| |/ _` \ \/ /      
 | |_) | |  __| | | \ V |  __| | | | | (_| |>  < _ _ _ 
 |____/|_|\___|_| |_|\_/ \___|_| |_|_|\__,_/_/\_(_(_(_)
                                                                     
  )";
  cout << "..." << nom << ", dale 'ENTER' para continuar..." << endl;
  
  cin.get();
  system ("clear");

    ppal();
    cout << "¡Estimadx " << nom << "!...Debes ser fuerte en estos momentos tan complicados..." << endl;
    cout << "¡COVID-SARS-19 ha mutado a COVID-SARS-22!" << endl;
    cout << "Sus efectos son mucho más poderosos ahora..." << endl;
    cout << nom << ", eres la única esperanza de la humanidad" << endl;
    cout << "Pulsa 'ENTER' para continuar..." << endl;
    cin.get();
    system ("clear");

    cout << "[1].Luchar contra COVID-SARS-22" << endl;//michitrato - lucha
    cout << "[2].BATALLA COVID-SARS-23" << endl;
    cout << "[3].Luchar contra COVID-SARS-24" << endl;
    cout << "[4].Luchar contra COVID-SARS-25" << endl;//¿Puedo acariciarle un poco?\n\n 3:Solo pasaba para mirar\n\n 4:Nada\n\n";
    
    cout << endl << "Ingresa tu preferencia: ";  
    cin >> opt;
    system("clear");

    switch (opt){
            case 1:
            optLucha();
            break;

            case 2:
            optaBatalla();
            break;

            case 3:
            optmirar();
            break;

            case 4:
            optnada();
            break;
            default:
            cout << "\n ¡No entiendo que me estás diciendo!"<<endl<<endl;
            break;
            }

  cout << "\n ¿Repetir?  1:Si      2:No :  ";
  cin >> opt;
  if (opt==1)
  {
    repeat = true;
  }
  else repeat = false;
  }
  return 0;
}