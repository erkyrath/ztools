
extern void configure_inform_tables (unsigned long,
                                     unsigned short *,
                                     unsigned long *,
                                     unsigned long *,
                                     unsigned long *,
                                     unsigned long *,
                                     unsigned long *,
                                     unsigned long *);

extern int print_inform_attribute_name(unsigned long, int);
extern int print_inform_property_name(unsigned long, int);
extern int print_inform_action_name(unsigned long, int);

extern void configure_dictionary
    (unsigned int *, unsigned long *, unsigned long *);
extern void configure_abbreviations
    (unsigned int *, unsigned long *, unsigned long *, unsigned long *,
     unsigned long *);
extern void configure_object_tables
    (unsigned int *, unsigned long *, unsigned long *, unsigned long *,
     unsigned long *);

