#pragma once
const char* AimType[] =
{
	"Hitbox",
	"Nearest hitbox"
};

const char* LegitHitbox[] =
{
	"Head",
	"Neck",
	"Pelvis",
	"Stomach",
	"Lower chest",
	"Chest",
	"Upper chest"
};

const char* LegitSelection[] =
{
	"Near crosshair",
	"Lowest health",
	"Highest damage",
	"Lowest distance"
};

const char* antiaim_type[] =
{
	"Rage",
	"Legit"
};

const char* movement_type[] =
{
	"Stand",
	"Slow walk",
	"Move",
	"Air"
};

const char* LegitFov[] =
{
	"Static",
	"Dynamic"
};

const char* LegitSmooth[] =
{
	"Static",
	"Humanized"
};

const char* RCSType[] =
{
	"Always on",
	"On target"
};

const char* selection[] =
{
	"Cycle",
	"Near crosshair",
	"Lowest distance",
	"Lowest health",
	"Highest damage"
};

const char* bodyaimlevel[] =
{
	"Low",
	"Medium",
	"High"
};

const char* bodyaim[] =
{
	"In air",
	"On high velocity",
	"On lethal",
	"On double tap",
	"If unresolved",
	"Prefer"
};

const char* autostop_modifiers[] =
{
	"Between shots",
	"On lethal",
	"Visible",
	"Center",
	"Force accuracy",
	"Predictive"
};

const char* hitboxes[] =
{
	"Head",
	"Upper chest",
	"Chest",
	"Lower chest",
	"Stomach",
	"Pelvis",
	"Arms",
	"Legs",
	"Feet"
};

const char* pitch[] =
{
	"None",
	"Down",
	"Up",
	"Zero",
	"Random",
	"Jitter",
	"Fake down",
	"Fake up",
	"Fake jitter"
};

const char* yaw[] =
{
	"Static",
	"Jitter",
	"Spin"
};

const char* baseangle[] =
{
	"Local view",
	"At targets"
};

const char* desync[] =
{
	"None",
	"Static",
	"Jitter"
};

const char* lby_type[] =
{
	"Normal",
	"Opposite",
	"Sway"
};

const char* proj_combo[] =
{
	"Icon",
	"Text",
	"Box",
	"Glow"
};

const char* weaponplayer[] =
{
	"Icon",
	"Text"
};

const char* weaponesp[] =
{
	"Icon",
	"Text",
	"Box",
	"Distance",
	"Glow",
	"Ammo"
};

const char* hitmarkers[] =
{
	"Crosshair",
	"World"
};

const char* glowtarget[] =
{
	"Enemy",
	"Teammate",
	"Local"
};

const char* glowtype[] =
{
	"Standard",
	"Pulse",
	"Inner"
};

const char* local_chams_type[] =
{
	"Real",
	"Desync"
};

const char* chamsvisact[] =
{
	"Visible",
	"Invisible"
};

const char* chamsvis[] =
{
	"Visible"
};

const char* chamstype[] =
{
	"Regular",
	"Mettalic",
	"Flat",
	"Pulse",
	"Crystal",
	"Glass",
	"Circuit",
	"Golden",
	"Glow"
};

const char* flags[] =
{
	"Money",
	"Armor",
	"Defuse kit",
	"Scoped",
	"Fakeducking",
	"Vulnerable",
	"Delay",
	"Bomb carrier"
};

const char* removals[] =
{
	"Scope",
	"Zoom",
	"Smoke",
	"Flash",
	"Recoil",
	"Landing bob",
	"Postprocessing",
	"Fog"
};

const char* indicators[] =
{
	"Fake",
	"Desync side",
	"Choke",
	"Damage override",
	"Safe points",
	"Body aim",
	"Double tap",
	"Hide shots"
};

const char* skybox[] =
{
	"None",
	"Tibet",
	"Baggage",
	"Italy",
	"Aztec",
	"Vertigo",
	"Daylight",
	"Daylight 2",
	"Clouds",
	"Clouds 2",
	"Gray",
	"Clear",
	"Canals",
	"Cobblestone",
	"Assault",
	"Clouds dark",
	"Night",
	"Night 2",
	"Night flat",
	"Dusty",
	"Rainy",
	"Custom"
};

const char* mainwep[] =
{
	"None",
	"Auto",
	"AWP",
	"SSG 08"
};

const char* secwep[] =
{
	"None",
	"Dual Berettas",
	"Deagle/Revolver"
};

const char* strafes[] =
{
	"None",
	"Legit",
	"Directional",
	"Rage"
};

const char* events_output[] =
{
	"Console",
	"Chat"
};

const char* events[] =
{
	"Player hits",
	"Items",
	"Bomb"
};

const char* grenades[] =
{
	"Grenades",
	"Armor",
	"Taser",
	"Defuser"
};

const char* fakelags[] =
{
	"Static",
	"Random",
	"Dynamic",
	"Fluctuate"
};
const char* mmregions[48] = {
		"Warsaw [Poland]",
	"Atlanta [U.S. South]",
	"Mumbai [India]",
	"Guangzhou [China]",
	"Guangzhou #2 [China]",
	"Guangzhou #3 [China]",
	"Guangzhou #4 [China]",
	"Dubai [United Arab Emirates]",
	"Seattle [U.S. North]",
	"Frankfurt [Switzerland]",
	"Sao Paulo [Brazil]",
	"Hong Kong [China]",
	"Washington D.C [U.S. East]",
	"Cape Town [South Africa]",
	"Los Angeles [U.S. West]",
	"London [United Kingdom]",
	"Lima [Peru]",
	"Berlin [Germany]",
	"Chennai [India]",
	"Madrid [Spain]",
	"Manila [Phillipines]",
	"Oklahoma City [Canada]",
	"Chicago [U.S.]",
	"Paris [France]",
	"Guangzhou #5 [China]",
	"Tianjin [China]",
	"Hebei [China]",
	"Wuhan [China]",
	"Jiaxing [China]",
	"Santiago [Chile]",
	"Seoul [South Korea]",
	"Singapore [Australia]",
	"Shanghai [China]",
	"Shanghai #2 [China]",
	"Shanghai #3 [China]",
	"Shanghai #4 [China]",
	"Nakashibetsu [Japan]",
	"Moscow [Russia]",
	"Moscow #2 [Russia]",
	"Sydney [Australia]",
	"Beijing [China]",
	"Beijing #2 [China]",
	"Beijing #3 [China]",
	"Beijing #4 [China]",
	"Tokyo [Japan]",
	"Tokyo #2 [Japan]",
	"Vienna [Austria]",
	"Amsterdam [Netherlands]"
};

const char* lagstrigger[] =
{
	"Slow walk",
	"Move",
	"Air",
	"Peek"
};

const char* sounds[] =
{
	"None",
	"Mettalic",
	"Cod",
	"Bubble",
	"Stapler",
	"Bell",
	"Flick"
};

const char* player_model_t[] =
{
	"None",
	"Enforcer",
	"Soldier",
	"Ground Rebel",
	"Maximus",
	"Osiris",
	"Slingshot",
	"Dragomir",
	"Blackwolf",
	"Prof. Shahmat",
	"Rezan The Ready",
	"Doctor Romanov",
	"Mr. Muhlik"
};

const char* player_teams[] =
{
	"Enemy",
	"Team",
	"Local"
};

const char* player_model_ct[] =
{
	"None",
	"Seal Team 6",
	"3rd Commando",
	"Operator FBI",
	"Squadron Officer",
	"Markus Delrow",
	"Buckshot",
	"McCoy",
	"Commander Ricksaw",
	"Agent Ava"
};