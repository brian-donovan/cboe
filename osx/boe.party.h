void init_party(short mode);
void init_party_scen_data();
void make_boats();
Boolean create_pc(short spot,short parent_num);
Boolean take_sp(short pc_num,short amt);
void heal_pc(short pc_num,short amt);
void heal_party(short amt);
void cure_pc(short pc_num,short amt);
void cure_party(short amt);
void curse_pc(short which_pc,short how_much);
void dumbfound_pc(short which_pc,short how_much);
void disease_pc(short which_pc,short how_much);
void sleep_pc(short which_pc,short how_much,short what_type,short adjust);
void slow_pc(short which_pc,short how_much);
void web_pc(short which_pc,short how_much);
void increase_light(short amt);
void restore_sp_pc(short pc_num,short amt);
void restore_sp_party(short amt);
void award_party_xp(short amt);
void award_xp(short pc_num,short amt);
void drain_pc(short which_pc,short how_much);
void do_xp_keep(short pc_num,short mode);
void spend_xp_event_filter (short item_hit);
void do_xp_draw();
void draw_xp_skills();
Boolean spend_xp(short pc_num, short mode, short parent);
short mage_lore_total();
Boolean poison_weapon( short pc_num, short how_much,short safe);
Boolean is_weapon(short pc_num,short item);
void cast_spell(short type,short situation);
Boolean repeat_cast_ok(short type);
void give_party_spell(short which);
void do_mage_spell(short pc_num,short spell_num);
void do_priest_spell(short pc_num,short spell_num);
void cast_town_spell(location where);
void sanctify_space(location where);
void crumble_wall(location where);
void do_mindduel(short pc_num,cPopulation::cCreature *monst);
void dispel_fields(short i,short j,short mode);
Boolean pc_can_cast_spell(short pc_num,short type,short spell_num);
void pick_spell_event_filter (short item_hit);
short pick_spell(short pc_num,short type,short situation) ;
short stat_adj(short pc_num,short which);
void set_town_spell(short s_num,short who_c);
void alch_choice_event_filter (short item_hit);
void do_alchemy();
short alch_choice(short pc_num);
void pc_graphic_event_filter (short item_hit);
Boolean pick_pc_graphic(short pc_num,short mode,short parent_num);
void pc_name_event_filter (short item_hit);
Boolean pick_pc_name(short pc_num,short parent_num)  ;
void pick_trapped_monst_event_filter (short item_hit);
unsigned char pick_trapped_monst()  ;
Boolean flying() ;
void acid_pc(short which_pc,short how_much);
void poison_pc(short which_pc,short how_much);
void poison_party(short how_much);
void affect_pc(short which_pc,short type,short how_much);
void affect_party(short type,short how_much);
void void_sanctuary(short pc_num);
void hit_party(short how_much,eDamageType damage_type);
void slay_party(eMainStatus mode);
Boolean damage_pc(short which_pc,short how_much,eDamageType damage_type,eMonsterType type_of_attacker, short sound_type);
void kill_pc(short which_pc,eMainStatus type);
void set_pc_moves();
void take_ap(short num);
short cave_lore_present();
short woodsman_present();
void init_spell_menus();
void adjust_spell_menus();
void print_spell_cast(short spell_num,short which);
void update_gold_skills();
void put_party_in_scen(std::string scen_name);

