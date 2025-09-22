extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 1;
double var_1_3 = 0.0;
double var_1_4 = 128.2;
double var_1_5 = 50.1;
double var_1_6 = 64.5;
unsigned short int var_1_7 = 1;
unsigned char var_1_8 = 5;
double var_1_9 = 15.35;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 32;
signed long int var_1_13 = 256;
signed char var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 0;
signed char var_1_17 = -64;
unsigned short int var_1_18 = 64;
unsigned short int var_1_20 = 8;
unsigned char var_1_22 = 0;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
unsigned char var_1_28 = 0;
double var_1_29 = 50.2;
double var_1_30 = 99.75;
double var_1_31 = 199.5;
signed char var_1_32 = -25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
signed short int var_1_38 = -4;
signed short int var_1_40 = 1;
signed short int var_1_41 = 1;
float var_1_42 = 16.2;
float var_1_43 = 10.75;
float var_1_44 = 999.6;
float var_1_45 = 64.5;
signed long int var_1_46 = -2;
unsigned char var_1_47 = 5;
float var_1_48 = 100000000.5;
unsigned short int last_1_var_1_18 = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_18;
                                         if ( ((var_1_6) > ( ((var_1_5) / ( (((((var_1_3)) > ((var_1_9))) ? ((var_1_3)) : ((var_1_9))))))))) {
                                          var_1_8 = (
                                           ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
  );
 } else {
                                          if ( ((stepLocal_0) <= (var_1_7))) {
                                           var_1_8 = (
    var_1_10
   );
  } else {
                                           var_1_8 = (
    var_1_11
   );
  }
 }
                              if (var_1_2) {
                               if ( (( (( ((var_1_3) - (var_1_4))) - (var_1_5))) == ( ((15.75) - (var_1_6))))) {
                                var_1_1 = (
                                 ((
     5
    ) + (
     var_1_7
    ))
   );
  } else {
                                var_1_1 = (
    var_1_7
   );
  }
 } else {
                               var_1_1 = (
   1
  );
 }
                                if (var_1_2) {
                                 var_1_13 = (
   var_1_11
  );
 }
 unsigned char stepLocal_1 = var_1_10;
                                if ( ((stepLocal_1) == ( ((((( ((var_1_15) - (var_1_16)))) > ((var_1_13))) ? (( ((var_1_15) - (var_1_16)))) : ((var_1_13))))))) {
                                 var_1_14 = (
                                  ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))
  );
 } else {
                                 var_1_14 = (
   var_1_17
  );
 }
                               if (var_1_2) {
                                if ( ((-128) > (var_1_10))) {
                                 if ( ((var_1_3) >= ( ((2.75) / (var_1_9))))) {
                                  var_1_12 = (
                                   ((
      var_1_11
     ) + (
                                    ((
       var_1_13
      ) + (
       var_1_10
      ))
     ))
    );
   } else {
                                  var_1_12 = (
     var_1_13
    );
   }
  }
 } else {
                                var_1_12 = (
   var_1_1
  );
 }
                                if ( ((var_1_7) == (var_1_12))) {
                                 var_1_18 = (
                                  ((
    var_1_10
   ) + (
                                   ((((( var_1_8 )) < (( var_1_16 ))) ? (( var_1_8 )) : (( var_1_16 ))))
   ))
  );
 } else {
                                 if ( ((var_1_14) != (var_1_16))) {
                                  if ( ((-256) >= (var_1_13))) {
                                   var_1_18 = (
     var_1_16
    );
   } else {
                                   var_1_18 = (
     var_1_15
    );
   }
  } else {
                                  var_1_18 = (
    var_1_10
   );
  }
 }
                  var_1_20 = (
  var_1_7
 );
                  if ( ((var_1_2) || ( ((2.65f) > (var_1_6))))) {
                   var_1_22 = (
                    (! (
                     (! (
     var_1_25
    ))
   ))
  );
 }
                   if (var_1_2) {
                    var_1_26 = (
                     (! (
                      ((
                       ((
      var_1_9
     ) >= (
      var_1_6
     ))
    ) && (
     var_1_28
    ))
   ))
  );
 }
                   if (var_1_2) {
                    var_1_29 = (
                     ((((( var_1_30 )) < (( var_1_31 ))) ? (( var_1_30 )) : (( var_1_31 ))))
  );
 }
                   if ( (( (( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) - ( ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))) <= (var_1_7))) {
                    var_1_32 = (
                     ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))
  );
 }
                   if ( (( ((var_1_16) & (var_1_13))) <= ( (( ((var_1_15) - (var_1_7))) + (-16))))) {
                    var_1_36 = (
   var_1_25
  );
 } else {
                    if (var_1_28) {
                     var_1_36 = (
                      (! (
                       (! (
      var_1_37
     ))
    ))
   );
  } else {
                     var_1_36 = (
    var_1_37
   );
  }
 }
                   if ( (( (( ((var_1_7) | (1))) % (var_1_15))) >= ( ((var_1_16) << ( (((((var_1_40)) > ((var_1_41))) ? ((var_1_40)) : ((var_1_41))))))))) {
                    var_1_38 = (
                     ((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) < 0 ) ? -(((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))
  );
 }
                   if (var_1_37) {
                    var_1_42 = (
                     ((
                      ((((( var_1_43 )) > (( var_1_44 ))) ? (( var_1_43 )) : (( var_1_44 ))))
   ) + (
                      ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))
   ))
  );
 }
                   var_1_46 = (
  var_1_15
 );
                   var_1_47 = (
  var_1_41
 );
                   var_1_48 = (
  var_1_4
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 4611686.018427388000e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427388000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 255);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -126);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 if (var_1_2) {
  if ( (( (( ((var_1_3) - (var_1_4))) - (var_1_5))) == ( ((15.75) - (var_1_6))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_6) > ( ((var_1_5) / ( (((((var_1_3)) > ((var_1_9))) ? ((var_1_3)) : ((var_1_9))))))))) {
 } else {
  if ( ((last_1_var_1_18) <= (var_1_7))) {
  } else {
  }
 }
 if (var_1_2) {
  if ( ((-128) > (var_1_10))) {
   if ( ((var_1_3) >= ( ((2.75) / (var_1_9))))) {
   } else {
   }
  }
 } else {
 }
 if (var_1_2) {
 }
 if ( ((var_1_10) == ( ((((( ((var_1_15) - (var_1_16)))) > ((var_1_13))) ? (( ((var_1_15) - (var_1_16)))) : ((var_1_13))))))) {
 } else {
 }
 if ( ((var_1_7) == (var_1_12))) {
 } else {
  if ( ((var_1_14) != (var_1_16))) {
   if ( ((-256) >= (var_1_13))) {
   } else {
   }
  } else {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                                         ((
      var_1_2
     ) ? (
                                          ((
                                                ((
                                                ((
                                                 ((
          var_1_3
         ) - (
          var_1_4
         ))
        ) - (
         var_1_5
        ))
       ) == (
                                                 ((
         15.75
        ) - (
         var_1_6
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned short int) (
                                             ((
          5
         ) + (
          var_1_7
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned short int) (
         var_1_7
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_1
      ) == (
                                           ((unsigned short int) (
        1
       ))
      ))
     ))
    ) && (
                                                     ((
                                                          ((
       var_1_6
      ) > (
                                                           ((
        var_1_5
       ) / (
                                                            ((((( var_1_3 )) > (( var_1_9 ))) ? (( var_1_3 )) : (( var_1_9 ))))
       ))
      ))
     ) ? (
                                                     ((
       var_1_8
      ) == (
                                                      ((unsigned char) (
                                                       ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
       ))
      ))
     ) : (
                                                     ((
                                                           ((
        last_1_var_1_18
       ) <= (
        var_1_7
       ))
      ) ? (
                                                      ((
        var_1_8
       ) == (
                                                       ((unsigned char) (
         var_1_10
        ))
       ))
      ) : (
                                                      ((
        var_1_8
       ) == (
                                                       ((unsigned char) (
         var_1_11
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_2
    ) ? (
                                          ((
                                                 ((
       -128
      ) > (
       var_1_10
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_3
       ) >= (
                                                   ((
         2.75
        ) / (
         var_1_9
        ))
       ))
      ) ? (
                                            ((
        var_1_12
       ) == (
                                             ((signed long int) (
                                              ((
          var_1_11
         ) + (
                                               ((
           var_1_13
          ) + (
           var_1_10
          ))
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_12
       ) == (
                                             ((signed long int) (
         var_1_13
        ))
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_12
     ) == (
                                           ((signed long int) (
       var_1_1
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_2
   ) ? (
                                         ((
     var_1_13
    ) == (
                                          ((signed long int) (
      var_1_11
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_10
   ) == (
                                               ((((( (( var_1_15 ) - ( var_1_16 )) )) > (( var_1_13 ))) ? (( (( var_1_15 ) - ( var_1_16 )) )) : (( var_1_13 ))))
   ))
  ) ? (
                                        ((
    var_1_14
   ) == (
                                         ((signed char) (
                                          ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))
    ))
   ))
  ) : (
                                        ((
    var_1_14
   ) == (
                                         ((signed char) (
     var_1_17
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_7
  ) == (
   var_1_12
  ))
 ) ? (
                                       ((
   var_1_18
  ) == (
                                        ((unsigned short int) (
                                         ((
     var_1_10
    ) + (
                                          ((((( var_1_8 )) < (( var_1_16 ))) ? (( var_1_8 )) : (( var_1_16 ))))
    ))
   ))
  ))
 ) : (
                                       ((
                                              ((
    var_1_14
   ) != (
    var_1_16
   ))
  ) ? (
                                        ((
                                               ((
     -256
    ) >= (
     var_1_13
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((unsigned short int) (
      var_1_16
     ))
    ))
   ) : (
                                         ((
     var_1_18
    ) == (
                                          ((unsigned short int) (
      var_1_15
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_18
   ) == (
                                         ((unsigned short int) (
     var_1_10
    ))
   ))
  ))
 ))
))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
