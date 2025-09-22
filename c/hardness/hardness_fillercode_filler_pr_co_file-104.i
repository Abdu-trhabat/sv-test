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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 1;
unsigned short int var_1_4 = 1;
unsigned short int var_1_5 = 500;
unsigned short int var_1_6 = 56288;
float var_1_7 = 32.75;
double var_1_8 = 1000000000.5;
double var_1_9 = 8.8;
double var_1_10 = 500.34;
double var_1_11 = 99.25;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
float var_1_14 = 49.8;
float var_1_15 = 8.8;
float var_1_16 = 5.25;
float var_1_17 = 2.875;
unsigned short int var_1_18 = 32;
float var_1_19 = 63.125;
signed char var_1_20 = -1;
signed char var_1_21 = 64;
signed long int var_1_22 = 256;
signed long int var_1_23 = 64;
unsigned long int var_1_24 = 100;
signed long int var_1_25 = 4;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 10;
unsigned char var_1_33 = 0;
signed char var_1_34 = -8;
signed char var_1_35 = -64;
signed char var_1_36 = -50;
signed char var_1_37 = -2;
signed char var_1_38 = -25;
signed char var_1_39 = -1;
unsigned long int var_1_40 = 8;
unsigned long int var_1_41 = 5;
unsigned char var_1_42 = 1;
float last_1_var_1_19 = 63.125;
unsigned long int last_1_var_1_24 = 100;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (( ((var_1_4) + (-10))) * (var_1_20));
                                           if ( ((stepLocal_2) == (last_1_var_1_24))) {
                                            if ( ((var_1_17) > (last_1_var_1_19))) {
                                             var_1_22 = (
                                              ((
     var_1_4
    ) + (
     var_1_3
    ))
   );
  } else {
                                             var_1_22 = (
    -10
   );
  }
 } else {
                                            var_1_22 = (
   var_1_23
  );
 }
                   if ( ((var_1_22) > ( ((var_1_38) ^ (var_1_35))))) {
                    if ( ((1000) > (var_1_24))) {
                     if ( (( (((((var_1_29)) < (( ((var_1_24) + (var_1_30))))) ? ((var_1_29)) : (( ((var_1_24) + (var_1_30))))))) >= (var_1_22))) {
                      var_1_42 = (
     var_1_33
    );
   }
  } else {
                     if ( ((var_1_22) < (var_1_24))) {
                      var_1_42 = (
     var_1_33
    );
   } else {
                      var_1_42 = (
     0
    );
   }
  }
 }
 signed long int stepLocal_3 = var_1_22;
                                if ( ((stepLocal_3) >= ( (( ((var_1_25) + (32))) - (var_1_3))))) {
                                 var_1_24 = (
   var_1_5
  );
 }
 unsigned char stepLocal_0 = var_1_13;
                              if ( ((var_1_8) > ( (( (((((var_1_9)) > ((var_1_10))) ? ((var_1_9)) : ((var_1_10))))) + (var_1_11))))) {
                               if ( (( ((var_1_2) && (var_1_12))) && (stepLocal_0))) {
                                var_1_7 = (
                                 ((
     var_1_14
    ) + (
     var_1_15
    ))
   );
  } else {
                                var_1_7 = (
    7.5f
   );
  }
 } else {
                               var_1_7 = (
                                ((
                                 ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 ))))
   ) - (
    256.4f
   ))
  );
 }
 signed long int stepLocal_4 = (((((var_1_5)) < ((var_1_25))) ? ((var_1_5)) : ((var_1_25))));
                                if ( ((var_1_4) > (stepLocal_4))) {
                                 if ( ((var_1_10) >= (var_1_9))) {
                                  var_1_26 = (
                                   (! (
     var_1_27
    ))
   );
  } else {
                                  var_1_26 = (
    var_1_27
   );
  }
 } else {
                                 var_1_26 = (
   0
  );
 }
                              if (var_1_26) {
                               var_1_1 = (
                                ((
                                ((((( var_1_3 )) > (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
   ) + (
    var_1_5
   ))
  );
 } else {
                               var_1_1 = (
                                ((
    var_1_6
   ) - (
    var_1_3
   ))
  );
 }
                  if ( (( ((var_1_29) - (var_1_30))) < ( ((var_1_22) | (var_1_24))))) {
                   var_1_28 = (
   var_1_33
  );
 }
                   if ( (( ((128) * ( ((var_1_30) | (-10))))) <= (5))) {
                    var_1_34 = (
                     ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
  );
 } else {
                    if ( (( ((((( ((var_1_29) ^ (-5)))) < ((var_1_22))) ? (( ((var_1_29) ^ (-5)))) : ((var_1_22))))) <= (var_1_30))) {
                     if ( ((var_1_22) >= (-128))) {
                      var_1_34 = (
     var_1_35
    );
   } else {
                      var_1_34 = (
     -1
    );
   }
  }
 }
                   if ( (( ((var_1_37) * (var_1_30))) >= ( ((8) - (var_1_29))))) {
                    var_1_40 = (
                     ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))
  );
 }
                              if (var_1_26) {
                               if (var_1_26) {
                                var_1_18 = (
    var_1_3
   );
  }
 }
                   if ( ((var_1_38) != (var_1_24))) {
                    if ( ((var_1_38) < ( (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) | (var_1_22))))) {
                     var_1_41 = (
                      ((((( 0u )) < (( var_1_30 ))) ? (( 0u )) : (( var_1_30 ))))
   );
  }
 }
 signed long int stepLocal_1 = ((var_1_20) - (var_1_21));
                                if (var_1_26) {
                                 if ( ((stepLocal_1) > (var_1_4))) {
                                  var_1_19 = (
                                   ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 ))))
   );
  }
 }
                   var_1_36 = (
                    (((((( ((((( var_1_37 )) > (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 )))) ) + ( var_1_39 ))) < 0 ) ? -((( ((((( var_1_37 )) > (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 )))) ) + ( var_1_39 ))) : ((( ((((( var_1_37 )) > (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 )))) ) + ( var_1_39 )))))
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483647);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1073741824);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 255);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -126);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -63);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -63);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_19 = var_1_19;
 last_1_var_1_24 = var_1_24;
}
int property(void) {
 if (var_1_26) {
 } else {
 }
 if ( ((var_1_8) > ( (( (((((var_1_9)) > ((var_1_10))) ? ((var_1_9)) : ((var_1_10))))) + (var_1_11))))) {
  if ( (( ((var_1_2) && (var_1_12))) && (var_1_13))) {
  } else {
  }
 } else {
 }
 if (var_1_26) {
  if (var_1_26) {
  }
 }
 if (var_1_26) {
  if ( (( ((var_1_20) - (var_1_21))) > (var_1_4))) {
  }
 }
 if ( (( (( ((var_1_4) + (-10))) * (var_1_20))) == (last_1_var_1_24))) {
  if ( ((var_1_17) > (last_1_var_1_19))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_22) >= ( (( ((var_1_25) + (32))) - (var_1_3))))) {
 }
 if ( ((var_1_4) > ( (((((var_1_5)) < ((var_1_25))) ? ((var_1_5)) : ((var_1_25))))))) {
  if ( ((var_1_10) >= (var_1_9))) {
  } else {
  }
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
       var_1_26
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned short int) (
                                             ((
                                             ((((( var_1_3 )) > (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
         ) + (
          var_1_5
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned short int) (
                                             ((
          var_1_6
         ) - (
          var_1_3
         ))
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_8
       ) > (
                                                 ((
                                                  ((((( var_1_9 )) > (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 ))))
        ) + (
         var_1_11
        ))
       ))
      ) ? (
                                           ((
                                                 ((
                                                  ((
          var_1_2
         ) && (
          var_1_12
         ))
        ) && (
         var_1_13
        ))
       ) ? (
                                            ((
         var_1_7
        ) == (
                                             ((float) (
                                              ((
           var_1_14
          ) + (
           var_1_15
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_7
        ) == (
                                             ((float) (
          7.5f
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_7
       ) == (
                                            ((float) (
                                             ((
                                              ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 ))))
         ) - (
          256.4f
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_26
     ) ? (
                                          ((
       var_1_26
      ) ? (
                                           ((
        var_1_18
       ) == (
                                            ((unsigned short int) (
         var_1_3
        ))
       ))
      ) : (
       1
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
     var_1_26
    ) ? (
                                          ((
                                                 ((
                                                  ((
        var_1_20
       ) - (
        var_1_21
       ))
      ) > (
       var_1_4
      ))
     ) ? (
                                           ((
       var_1_19
      ) == (
                                            ((float) (
                                             ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 ))))
       ))
      ))
     ) : (
      1
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                                   ((
                                                          ((
                                                           ((
                                                            ((
       var_1_4
      ) + (
       -10
      ))
     ) * (
      var_1_20
     ))
    ) == (
     last_1_var_1_24
    ))
   ) ? (
                                                    ((
                                                           ((
      var_1_17
     ) > (
      last_1_var_1_19
     ))
    ) ? (
                                                     ((
      var_1_22
     ) == (
                                                      ((signed long int) (
                                                       ((
        var_1_4
       ) + (
        var_1_3
       ))
      ))
     ))
    ) : (
                                                     ((
      var_1_22
     ) == (
                                                      ((signed long int) (
       -10
      ))
     ))
    ))
   ) : (
                                                    ((
     var_1_22
    ) == (
                                                     ((signed long int) (
      var_1_23
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_22
   ) >= (
                                               ((
                                                ((
      var_1_25
     ) + (
      32
     ))
    ) - (
     var_1_3
    ))
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned long int) (
     var_1_5
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_4
  ) > (
                                              ((((( var_1_5 )) < (( var_1_25 ))) ? (( var_1_5 )) : (( var_1_25 ))))
  ))
 ) ? (
                                       ((
                                              ((
    var_1_10
   ) >= (
    var_1_9
   ))
  ) ? (
                                        ((
    var_1_26
   ) == (
                                         ((unsigned char) (
                                          (! (
      var_1_27
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_26
   ) == (
                                         ((unsigned char) (
     var_1_27
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_26
  ) == (
                                        ((unsigned char) (
    0
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
