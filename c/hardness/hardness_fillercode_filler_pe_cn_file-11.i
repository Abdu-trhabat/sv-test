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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
signed char var_1_4 = 5;
signed char var_1_7 = 0;
signed char var_1_8 = 16;
signed char var_1_9 = 4;
unsigned long int var_1_10 = 128;
unsigned long int var_1_11 = 1422462314;
signed short int var_1_12 = 8;
float var_1_13 = 49.5;
float var_1_14 = 0.4;
signed short int var_1_15 = -50;
unsigned long int var_1_16 = 1;
unsigned long int var_1_17 = 3609236770;
unsigned long int var_1_18 = 2902762324;
double var_1_19 = 3.8;
double var_1_20 = 255.75;
unsigned short int var_1_21 = 0;
signed char var_1_22 = -8;
signed long int var_1_23 = -32;
signed char var_1_24 = -128;
float var_1_25 = 3.25;
float var_1_26 = -0.75;
float var_1_27 = 255.6;
unsigned char var_1_28 = 0;
signed char var_1_29 = 2;
signed char var_1_30 = -50;
signed char var_1_31 = -16;
signed char var_1_32 = 10;
signed char var_1_33 = 2;
signed char var_1_34 = 10;
signed char var_1_35 = 64;
signed char var_1_36 = 100;
signed long int var_1_37 = -100;
signed char var_1_38 = 4;
signed char var_1_39 = -5;
unsigned char var_1_40 = 32;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 64;
signed char var_1_43 = -1;
unsigned long int last_1_var_1_10 = 128;
unsigned long int last_1_var_1_16 = 1;
double last_1_var_1_19 = 3.8;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = last_1_var_1_16;
 signed char stepLocal_0 = var_1_8;
                                           if ( ((last_1_var_1_10) != (stepLocal_1))) {
                                           if ( ((stepLocal_0) <= (last_1_var_1_10))) {
                                            if ( (( (- (last_1_var_1_19))) >= (last_1_var_1_19))) {
                                             var_1_12 = (
     var_1_8
    );
   }
  }
 } else {
                                            var_1_12 = (
   var_1_9
  );
 }
                              var_1_1 = (
                               ((
   var_1_2
  ) || (
                                (! (
    var_1_3
   ))
  ))
 );
                               var_1_10 = (
                                ((
   4027026809u
  ) - (
                                 ((
                                  ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))
   ) - (
    var_1_7
   ))
  ))
 );
                                if (var_1_1) {
                                 if ( ((var_1_13) >= (var_1_14))) {
                                  if ( (! (var_1_3))) {
                                   var_1_15 = (
     var_1_8
    );
   }
  } else {
                                  var_1_15 = (
    var_1_7
   );
  }
 } else {
                                 var_1_15 = (
   5
  );
 }
                                var_1_19 = (
                                 ((((( ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) )) < (( 1.4 ))) ? (( ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) )) : (( 1.4 ))))
 );
 unsigned char stepLocal_2 = var_1_1;
                                if ( (( ((var_1_10) == ( ((var_1_8) - (var_1_9))))) && (stepLocal_2))) {
                                 var_1_21 = (
   var_1_9
  );
 }
                               if ( ((var_1_21) == (var_1_15))) {
                                var_1_4 = (
                                 ((
                                  ((
     8
    ) + (
                                   ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
    ))
   ) - (
    var_1_9
   ))
  );
 }
                                if ( ((var_1_13) != (var_1_14))) {
                                 var_1_16 = (
                                  ((
                                   ((((( var_1_11 )) < (( var_1_7 ))) ? (( var_1_11 )) : (( var_1_7 ))))
   ) + (
    var_1_8
   ))
  );
 } else {
                                 if ( ((var_1_15) > (var_1_12))) {
                                  var_1_16 = (
                                   ((
     var_1_17
    ) - (
                                    ((
      var_1_11
     ) - (
      var_1_8
     ))
    ))
   );
  } else {
                                  var_1_16 = (
                                   ((
                                    ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
    ) - (
     var_1_9
    ))
   );
  }
 }
            var_1_22 = (
             ((((-25) < 0 ) ? -(-25) : (-25)))
 );
             if ( ((var_1_22) > (var_1_24))) {
              if ( (( (~ (var_1_22))) <= (128))) {
              var_1_23 = (
    var_1_24
   );
  } else {
               var_1_23 = (
    var_1_22
   );
  }
 }
             if ( ((var_1_23) <= (var_1_24))) {
              var_1_25 = (
               ((((( ((((( var_1_26 )) > (( 49.5f ))) ? (( var_1_26 )) : (( 49.5f )))) )) < (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) ))) ? (( ((((( var_1_26 )) > (( 49.5f ))) ? (( var_1_26 )) : (( 49.5f )))) )) : (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) ))))
  );
 } else {
              if (var_1_28) {
               var_1_25 = (
    var_1_26
   );
  } else {
               var_1_25 = (
    64.75f
   );
  }
 }
             if ( ((var_1_23) <= (var_1_22))) {
              if (var_1_28) {
               if ( ((var_1_22) <= ( (((((((((var_1_30)) < ((var_1_31))) ? ((var_1_30)) : ((var_1_31))))) < 0 ) ? -((((((var_1_30)) < ((var_1_31))) ? ((var_1_30)) : ((var_1_31))))) : ((((((var_1_30)) < ((var_1_31))) ? ((var_1_30)) : ((var_1_31)))))))))) {
                var_1_29 = (
                 ((((( var_1_32 )) < (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 ))))
    );
   }
  }
 } else {
              var_1_29 = (
               (((((( var_1_34 ) - ( var_1_35 ))) < 0 ) ? -((( var_1_34 ) - ( var_1_35 ))) : ((( var_1_34 ) - ( var_1_35 )))))
  );
 }
             if ( ((var_1_28) || ( ((var_1_33) <= (var_1_23))))) {
              if ( (( (((((((((var_1_23)) > ((var_1_35))) ? ((var_1_23)) : ((var_1_35))))) < 0 ) ? -((((((var_1_23)) > ((var_1_35))) ? ((var_1_23)) : ((var_1_35))))) : ((((((var_1_23)) > ((var_1_35))) ? ((var_1_23)) : ((var_1_35)))))))) <= (var_1_37))) {
               if ( ((var_1_35) > ( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))))) {
                var_1_36 = (
                 (((((( var_1_38 ) + ( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) ))) < 0 ) ? -((( var_1_38 ) + ( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) ))) : ((( var_1_38 ) + ( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) )))))
    );
   } else {
                var_1_36 = (
     var_1_32
    );
   }
  } else {
               var_1_36 = (
    var_1_39
   );
  }
 } else {
              var_1_36 = (
   var_1_35
  );
 }
             var_1_40 = (
  var_1_41
 );
             var_1_42 = (
  var_1_35
 );
             var_1_43 = (
  var_1_32
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 0);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 1073741823);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 2147483647);
 assume_abort_if_not(var_1_18 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -128);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -127);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -2147483648);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -63);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_19 = var_1_19;
}
int property(void) {
 if ( ((var_1_21) == (var_1_15))) {
 }
 if ( ((last_1_var_1_10) != (last_1_var_1_16))) {
  if ( ((var_1_8) <= (last_1_var_1_10))) {
   if ( (( (- (last_1_var_1_19))) >= (last_1_var_1_19))) {
   }
  }
 } else {
 }
 if (var_1_1) {
  if ( ((var_1_13) >= (var_1_14))) {
   if ( (! (var_1_3))) {
   }
  } else {
  }
 } else {
 }
 if ( ((var_1_13) != (var_1_14))) {
 } else {
  if ( ((var_1_15) > (var_1_12))) {
  } else {
  }
 }
 if ( (( ((var_1_10) == ( ((var_1_8) - (var_1_9))))) && (var_1_1))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                                          ((
        var_1_1
       ) == (
                                           ((unsigned char) (
                                            ((
          var_1_2
         ) || (
                                             (! (
           var_1_3
          ))
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
         var_1_21
        ) == (
         var_1_15
        ))
       ) ? (
                                            ((
         var_1_4
        ) == (
                                             ((signed char) (
                                              ((
                                               ((
            8
           ) + (
                                                ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
           ))
          ) - (
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
       var_1_10
      ) == (
                                           ((unsigned long int) (
                                            ((
         4027026809u
        ) - (
                                             ((
                                              ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))
         ) - (
          var_1_7
         ))
        ))
       ))
      ))
     ))
    ) && (
                                                      ((
                                                           ((
       last_1_var_1_10
      ) != (
       last_1_var_1_16
      ))
     ) ? (
                                                      ((
                                                            ((
        var_1_8
       ) <= (
        last_1_var_1_10
       ))
      ) ? (
                                                       ((
                                                             ((
                                                              (- (
          last_1_var_1_19
         ))
        ) >= (
         last_1_var_1_19
        ))
       ) ? (
                                                        ((
         var_1_12
        ) == (
                                                         ((signed short int) (
          var_1_8
         ))
        ))
       ) : (
        1
       ))
      ) : (
       1
      ))
     ) : (
                                                       ((
       var_1_12
      ) == (
                                                        ((signed short int) (
        var_1_9
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_1
    ) ? (
                                          ((
                                                 ((
       var_1_13
      ) >= (
       var_1_14
      ))
     ) ? (
                                           ((
                                                  (! (
        var_1_3
       ))
      ) ? (
                                            ((
        var_1_15
       ) == (
                                             ((signed short int) (
         var_1_8
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                           ((
       var_1_15
      ) == (
                                            ((signed short int) (
        var_1_7
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_15
     ) == (
                                           ((signed short int) (
       5
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_13
    ) != (
     var_1_14
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((unsigned long int) (
                                           ((
                                            ((((( var_1_11 )) < (( var_1_7 ))) ? (( var_1_11 )) : (( var_1_7 ))))
      ) + (
       var_1_8
      ))
     ))
    ))
   ) : (
                                         ((
                                                ((
      var_1_15
     ) > (
      var_1_12
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned long int) (
                                            ((
        var_1_17
       ) - (
                                             ((
         var_1_11
        ) - (
         var_1_8
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned long int) (
                                            ((
                                             ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
       ) - (
        var_1_9
       ))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_19
  ) == (
                                        ((double) (
                                         ((((( ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) )) < (( 1.4 ))) ? (( ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) )) : (( 1.4 ))))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_10
   ) == (
                                               ((
     var_1_8
    ) - (
     var_1_9
    ))
   ))
  ) && (
   var_1_1
  ))
 ) ? (
                                       ((
   var_1_21
  ) == (
                                        ((unsigned short int) (
    var_1_9
   ))
  ))
 ) : (
  1
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
