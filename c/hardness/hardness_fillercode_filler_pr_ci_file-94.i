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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed char var_1_2 = 0;
signed char var_1_3 = 32;
signed short int var_1_5 = 16;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
signed long int var_1_9 = 50;
double var_1_10 = 32.7;
double var_1_11 = 64.25;
double var_1_12 = 10.3;
double var_1_13 = 3.3;
double var_1_14 = 16.5;
double var_1_15 = 7.125;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 64;
unsigned long int var_1_18 = 16;
signed short int var_1_19 = 8;
signed long int var_1_20 = -4;
double var_1_21 = 15.125;
unsigned char var_1_22 = 1;
float var_1_28 = 999999999.85;
signed short int var_1_31 = -256;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned short int var_1_34 = 50;
unsigned short int var_1_35 = 2;
unsigned short int var_1_36 = 128;
float var_1_37 = 9.25;
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_20 = -4;
void initially(void) {
}
void step(void) {
                                          if ( ((var_1_8) || (last_1_var_1_1))) {
                                           if ( (( ((var_1_2) >= (last_1_var_1_20))) && (last_1_var_1_1))) {
                                           var_1_9 = (
                                            ((((( var_1_3 )) < (( last_1_var_1_20 ))) ? (( var_1_3 )) : (( last_1_var_1_20 ))))
   );
  } else {
                                            if (last_1_var_1_1) {
                                            var_1_9 = (
     var_1_5
    );
   } else {
                                             var_1_9 = (
     var_1_2
    );
   }
  }
 } else {
                                           var_1_9 = (
   last_1_var_1_20
  );
 }
                   var_1_32 = (
  1
 );
                               var_1_10 = (
                                ((
                                 ((((( var_1_11 )) < (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
  ) + (
                                 ((
    var_1_13
   ) + (
                                  ((
     var_1_14
    ) - (
     var_1_15
    ))
   ))
  ))
 );
                   if (var_1_8) {
                    var_1_31 = (
                     ((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) < 0 ) ? -(((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))))
  );
 } else {
                    if ( ((var_1_9) >= ( (( (~ (var_1_9))) ^ ( ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))))))) {
                     if ( ((var_1_21) <= (var_1_13))) {
                      var_1_31 = (
     var_1_9
    );
   }
  } else {
                     var_1_31 = (
    var_1_2
   );
  }
 }
                               if ( ((var_1_14) >= (var_1_11))) {
                                var_1_16 = (
                                  ((((( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_2 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_2 )))) )) > (( var_1_17 ))) ? (( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_2 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_2 )))) )) : (( var_1_17 ))))
  );
 }
                   if (var_1_7) {
                    if ( (( ((var_1_17) + (var_1_5))) <= (var_1_16))) {
                     var_1_37 = (
                      ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))
   );
  } else {
                     var_1_37 = (
    var_1_13
   );
  }
 }
                                if ( (( (( (((((var_1_2)) > ((var_1_3))) ? ((var_1_2)) : ((var_1_3))))) - (var_1_19))) >= (var_1_9))) {
                                 var_1_18 = (
                                  ((((( var_1_3 )) > (( var_1_19 ))) ? (( var_1_3 )) : (( var_1_19 ))))
  );
 }
                   if ( ((var_1_8) || (var_1_7))) {
                    var_1_33 = (
   var_1_7
  );
 } else {
                    if ( ((var_1_11) > (var_1_15))) {
                     var_1_33 = (
                      (! (
     var_1_8
    ))
   );
  }
 }
                   if ( ((var_1_11) > (63.75f))) {
                    if ( ((var_1_28) > (7.9f))) {
                     var_1_34 = (
    var_1_35
   );
  } else {
                     var_1_34 = (
    var_1_36
   );
  }
 }
                                if ( (( ((var_1_15) + ( ((4.6f) * (var_1_11))))) == (var_1_14))) {
                                 var_1_21 = (
                                  ((
    var_1_13
   ) + (
    var_1_15
   ))
  );
 } else {
                                 var_1_21 = (
   var_1_14
  );
 }
 signed long int stepLocal_1 = ((var_1_16) / (var_1_5));
 signed char stepLocal_0 = var_1_3;
                              if ( (( ((10) << (var_1_2))) < (stepLocal_0))) {
                               if ( ((stepLocal_1) > ( ((-1000000000) + (var_1_2))))) {
                                var_1_1 = (
                                 ((
     var_1_6
    ) || (
     var_1_7
    ))
   );
  } else {
                                var_1_1 = (
    var_1_8
   );
  }
 }
                                if ( ((var_1_7) || ( ((var_1_21) <= ( (- (var_1_12))))))) {
                                 var_1_20 = (
                                  ((
    var_1_17
   ) + (
    var_1_9
   ))
  );
 }
                   if ( (( ((var_1_3) * (var_1_17))) == (var_1_20))) {
                    if ( ((var_1_17) > (var_1_20))) {
                     var_1_22 = (
                      ((
                       ((
                        ((
       var_1_12
      ) * (
       var_1_14
      ))
     ) > (
                        ((
       16.6f
      ) / (
       var_1_28
      ))
     ))
    ) && (
     var_1_8
    ))
   );
  }
 } else {
                    if ( ((5) <= ( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) {
                     var_1_22 = (
                      ((
                       ((
      var_1_20
     ) >= (
      var_1_3
     ))
    ) || (
     var_1_7
    ))
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 64);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 assume_abort_if_not(var_1_28 != 0.0F);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( (( ((10) << (var_1_2))) < (var_1_3))) {
  if ( (( ((var_1_16) / (var_1_5))) > ( ((-1000000000) + (var_1_2))))) {
  } else {
  }
 }
 if ( ((var_1_8) || (last_1_var_1_1))) {
  if ( (( ((var_1_2) >= (last_1_var_1_20))) && (last_1_var_1_1))) {
  } else {
   if (last_1_var_1_1) {
   } else {
   }
  }
 } else {
 }
 if ( ((var_1_14) >= (var_1_11))) {
 }
 if ( (( (( (((((var_1_2)) > ((var_1_3))) ? ((var_1_2)) : ((var_1_3))))) - (var_1_19))) >= (var_1_9))) {
 }
 if ( ((var_1_7) || ( ((var_1_21) <= ( (- (var_1_12))))))) {
 }
 if ( (( ((var_1_15) + ( ((4.6f) * (var_1_11))))) == (var_1_14))) {
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
                                                ((
                                                ((
         10
        ) << (
         var_1_2
        ))
       ) < (
        var_1_3
       ))
      ) ? (
                                           ((
                                                 ((
                                                  ((
          var_1_16
         ) / (
          var_1_5
         ))
        ) > (
                                                  ((
          -1000000000
         ) + (
          var_1_2
         ))
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((unsigned char) (
                                              ((
           var_1_6
          ) || (
           var_1_7
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((unsigned char) (
          var_1_8
         ))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                                      ((
                                                           ((
        var_1_8
       ) || (
        last_1_var_1_1
       ))
      ) ? (
                                                       ((
                                                            ((
                                                             ((
          var_1_2
         ) >= (
          last_1_var_1_20
         ))
        ) && (
         last_1_var_1_1
        ))
       ) ? (
                                                       ((
         var_1_9
        ) == (
                                                        ((signed long int) (
                                                         ((((( var_1_3 )) < (( last_1_var_1_20 ))) ? (( var_1_3 )) : (( last_1_var_1_20 ))))
         ))
        ))
       ) : (
                                                        ((
         last_1_var_1_1
        ) ? (
                                                        ((
          var_1_9
         ) == (
                                                         ((signed long int) (
           var_1_5
          ))
         ))
        ) : (
                                                         ((
          var_1_9
         ) == (
                                                          ((signed long int) (
           var_1_2
          ))
         ))
        ))
       ))
      ) : (
                                                       ((
        var_1_9
       ) == (
                                                        ((signed long int) (
         last_1_var_1_20
        ))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_10
     ) == (
                                           ((double) (
                                            ((
                                             ((((( var_1_11 )) < (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
       ) + (
                                             ((
         var_1_13
        ) + (
                                              ((
          var_1_14
         ) - (
          var_1_15
         ))
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_14
     ) >= (
      var_1_11
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned short int) (
                                            ((((( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_2 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_2 )))) )) > (( var_1_17 ))) ? (( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_2 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_2 )))) )) : (( var_1_17 ))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
                                                 ((((( var_1_2 )) > (( var_1_3 ))) ? (( var_1_2 )) : (( var_1_3 ))))
     ) - (
      var_1_19
     ))
    ) >= (
     var_1_9
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((unsigned long int) (
                                           ((((( var_1_3 )) > (( var_1_19 ))) ? (( var_1_3 )) : (( var_1_19 ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_7
   ) || (
                                               ((
     var_1_21
    ) <= (
                                                (- (
      var_1_12
     ))
    ))
   ))
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((signed long int) (
                                          ((
      var_1_17
     ) + (
      var_1_9
     ))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_15
   ) + (
                                               ((
     4.6f
    ) * (
     var_1_11
    ))
   ))
  ) == (
   var_1_14
  ))
 ) ? (
                                       ((
   var_1_21
  ) == (
                                        ((double) (
                                         ((
     var_1_13
    ) + (
     var_1_15
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_21
  ) == (
                                        ((double) (
    var_1_14
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
