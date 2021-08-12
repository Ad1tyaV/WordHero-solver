# WordHero-solver
This is a CPP version of the solver implemented using the Trie DataStructure and a Depth First Search Recursive Algorithm to find all the letter from a given letter in the grid.

## This game is played on real-time by players from all around the word, you can download it from here:

https://play.google.com/store/apps/details?id=com.rhs.wordhero

# Usage

## Setup
### install g++ or your choice of compiler

## Compile
### Assuming you have installed g++
 `$ g++ -std=c++0x word-hero.cpp -o word-hero`

## Run

### After you compile using above command you will see a file word-hero (without any extension)
 `$ ./word-hero`

## Sample Output

```$ g++ -std=c++0x word-hero.cpp -o word-hero
$ ./word-hero
Do you want to enter the board as input ? Y/N ?
n
S       S       E       E
H       P       R       D
I       A       E       I
S       D       Y       R
Total number of elements:563
REPRESS REARED  REIRD   RYAS    RIDERSHIPS      RIDERED YIRD    YID     YARDED  YARD    REDRESS YAR     YAHS    YAPS    YAE     YADS    REARS   YAD     YA      YEPS    YEARS   YEARD   YEAS    YEADS   YEA     YERD    YER     DEARED   DERIDES DERIDE  DEIDER  DERIDERS        DIPS    DIP     DIAPER  DARI    DARED   DARER   DARE    DAS     DAHS    DAY     DAIS    DAPS    YEAHS   DAP     DAE     DA      DYED    DYERS   DYER    DYE     SARS    SARI    SAREE    SARED   SAR     SAYID   SAYED   SAYER   SAID    SAPIDER DAH     SAP     SAE     SADI    SIPED   SIPE    SIP     SIDERS  SAYERS  SIDER   SIDE    SIDA    SI      IRADE   IRES    IDES    IDEES   IRED    EARS    EAR     EA       EIDERS  DERIDER SIDED   EIDER   EIDE    EYAS    EYRIR   ARSED   ARSE    EPEE    ARIDER  ARID    AREDE   ARE     AR      AS      YEDE    AHS     AHIS    SIPES   AHI     AH      AYE     AYRE    PARES   PIA     SPEER   DEEP     PARE    PAYER   SPAE    DARES   PAID    PRIED   PADS    HARPED  PARED   RAPHIS  SERA    HARDER  SPEEDREAD       EARED   RAPHIDE HARDIER YARER   ERED    HARE    SPAER   SIDEDRESS       HAYIER  DESHI   AEDES   HAED    SPADER   HIDED   HIDERS  HIDER   YEAR    PARDED  DISA    EPHAS   SPEIR   EPHA    SPARER  REAP    SARD    ESS     SHAPERS SHARPER DRESS   HIP     DEID    HAS     PED     EERIE   ERES    ERAS    RESHIP  SEPIAS  SEPIA   SAD     HIPS     PAS     SEPS    SEPAD   HAYED   REAPS   SEEDED  PIAS    DREAD   RID     REDES   SEDER   DEARE   SERAIS  SERAI   HADE    HARPS   SERE    PAH     HAERES  PARS    PREED   SPARE   AREDES  SPAERS  RIDERSHIP       SPAHI   SPRAYER  PAD     EPEIRAS IRE     SPREE   PRIDE   PARD    SPADERS SAY     READS   HAD     AERY    DESHIS  SPIDER  PES     SPED    PADIS   HAYER   SHADS   RAPE    DRIED   YIRDED  SHAD    YAH     SPAHIS  IS      APRES   SHIP    HAPS     AIDS    RAIDS   SPEEDERS        SPARSE  SPIDERY APHIDS  SPRAYIER        ER      SHADERS YEAH    DIS     SPAED   PARDIE  HADED   SPHAERS DIRER   SPAYD   SHARP   RIDE    HAE     DEP     SHADED  PAHS    SHARED  SHAPS   SAI      SPEAR   SADE    SPADE   SHAPED  SHARPED HARD    DRAPE   HIDE    YEDES   SHIPS   RAYED   AIDED   PAIS    YEAD    SPERSED PERSE   SHAPER  SPARES  SERAPH  PAYED   SPAS    ED      SPHAERE SPADED  SIPS    RESHAPE RAP     SPRAYED  SHARD   SAPS    RAPIDS  SPRAD   DREADS  HAYRIDE SPREDS  REEDER  PERE    APES    SRI     PARER   SEEDIER SPARD   PARSE   SHAY    SHAPE   SERAPHS IDEA    SPARID  PARDI   PEAR    RESHAPER        SHARE   RAHS    ES      REEDE    DRAPES  SPRED   HAEREDES        SPEED   ERE     RADE    SPEEDIER        PERDIE  RED     SPREAD  SPRAY   SEER    SPAR    DERAY   SPREADS RAPIDER PERAIS  PRAYED  SHARES  SHAPES  HAYERS  DIE     SERED   SPHAER  AIS     HADS     PHARES  SPEARS  DRAD    SPEIRS  PADI    RYE     HID     SHARER  AI      SPERSE  DRAPEY  SPIDE   SPIDERED        SPIDERS HI      SPEEDED PA      PAY     SPAYDS  RESHIPS HAP     SPEEDER SHARDED HARED   SPAY    SPRAID  YEP      HARES   SHADER  SPEERS  PARSED  DIAPERED        ARS     SHA     PER     PERI    HARP    PRE     SEE     PREY    PREDY   YAP     PRESS   DEEPER  PREDIED DIYA    REAR    RADS    PRIDES  PRIDED  PRIER   DEARES  PRAD    EDS      RAID    SPARS   REPS    SPHAERES        PRADS   ARD     PRAY    DIAPERS SER     PRAYER  PREES   SPEIRED REDIAS  PHI     PHIS    PE      RIDERS  SERER   PERES   SEED    DRAY    PEA     DEAR    PEAS    PEARE   PEARES  PEARS    PEDS    AY      PEDIS   PEDES   SHADY   RAPED   SPAYED  AIDERS  PI      APERS   SPEEDREADS      PIS     PEDI    PEE     SPA     RIDER   PEER    PEERED  SPREED  PEERIE  EERIER  PEERIER PEERS   RE      SAPID   ARES    DEPS     ERA     REI     HARPER  EE      READY   EARD    IDEAS   REAPED  REP     REPAID  REPAY   PEED    REDS    AIDER   REDIA   RYA     REDIP   HAYRIDES        SPARED  REDIPS  AIDE    SPEERED REDE    ERS     PEREA   REE     REED     APED    REEDIER REEDED  EPEIRA  SH      RES     SERAPE  RESPADE PAYERS  RESPADED        RESH    RESHAPED        REDED   RIDES   PAR     RAD     RAPS    SED     RAPID   REAPER  DI      EAS     RAPES   RAI     YAS     RAIS     AE      IDE     DEY     RAIDER  SEEDER  RAIDED  HAY     RAY     RAH     RAS     REES    DIRE    DIED    SHADE   DIYAS   IDEE    SPEARED DE      DEE     RAPER   DEER    DEERE   DEERS   ARED    DEES    DERE    DEEPS   SPRIER   PERAI   DERED   DERES   DRAPED  DERAYED DREY    DREE    SAREES  DRIER   READ    DRAPS   DRAP    APHID   PHARE   DRAPER  APSE    YARDER  DRAPERY DRAYED  REAIS   SHARPS  SEPADS  DREES   YE      DEI     DEAD    DEADS   DEARS    PARDEE  DEPRESS ID      PREE    IDS     REAPERS AD      ADS     APHIS   HA      APE     ASIDE   HIS     APER    YARE    APERY   AID     SPREES  AYRIE
```

## Other Repos you might find interesting

[Scrabble Words](https://github.com/Ad1tyaV/scrabbleWords)

[Book Cricket](https://github.com/Ad1tyaV/book-cricket-react-redux) and [Live Demo](https://ad1tyav.github.io/book-cricket-react-redux)
