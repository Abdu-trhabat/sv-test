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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 4.8;
float var_1_6 = 10000000000000.95;
float var_1_7 = 2.8;
float var_1_8 = 32.7;
float var_1_9 = 256.4;
double var_1_10 = 8.125;
signed short int var_1_11 = 16;
signed short int var_1_12 = 32;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 25;
signed long int var_1_18 = -1;
unsigned char var_1_19 = 2;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 58772;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned short int var_1_28 = 16;
signed char var_1_30 = 32;
signed char var_1_32 = -10;
signed char var_1_33 = 10;
signed char var_1_34 = 2;
signed long int var_1_35 = -16;
double var_1_36 = 1.04;
double var_1_37 = 10.2;
double var_1_38 = 7.6;
signed char var_1_39 = 0;
double var_1_40 = 3.9;
double var_1_41 = 8.4;
double var_1_42 = 31.75;
double var_1_43 = 1.6;
unsigned short int var_1_44 = 50;
unsigned short int var_1_45 = 256;
signed char var_1_46 = 32;
signed long int last_1_var_1_18 = -1;
unsigned short int last_1_var_1_20 = 100;
void initially(void) {
}
void step(void) {
                                         var_1_11 = (
                                          ((((( last_1_var_1_18 )) < (( ((((( last_1_var_1_20 )) > (( var_1_12 ))) ? (( last_1_var_1_20 )) : (( var_1_12 )))) ))) ? (( last_1_var_1_18 )) : (( ((((( last_1_var_1_20 )) > (( var_1_12 ))) ? (( last_1_var_1_20 )) : (( var_1_12 )))) ))))
 );
                               if ( ((var_1_14) || (var_1_15))) {
                                var_1_20 = (
                                 ((
    var_1_21
   ) - (
                                  ((((( var_1_19 )) < (( var_1_17 ))) ? (( var_1_19 )) : (( var_1_17 ))))
   ))
  );
 }
                               var_1_22 = (
  var_1_14
 );
                               if (var_1_22) {
                                var_1_13 = (
                                 ((
    var_1_14
   ) && (
                                  (! (
     var_1_15
    ))
   ))
  );
 }
                  if ( (( (((((var_1_12)) > ((var_1_18))) ? ((var_1_12)) : ((var_1_18))))) <= (var_1_20))) {
                   var_1_30 = (
                    ((
                     ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
   ) + (
    var_1_33
   ))
  );
 }
                  if ( ((var_1_16) > (var_1_21))) {
                   var_1_34 = (
   var_1_32
  );
 }
                   if ( (( (((((var_1_36)) > ((var_1_37))) ? ((var_1_36)) : ((var_1_37))))) < (var_1_38))) {
                    if ( ((var_1_32) <= (var_1_20))) {
                     var_1_35 = (
                      ((((( var_1_33 )) < (( (( ((((( 10 )) > (( var_1_32 ))) ? (( 10 )) : (( var_1_32 )))) ) + ( var_1_21 )) ))) ? (( var_1_33 )) : (( (( ((((( 10 )) > (( var_1_32 ))) ? (( 10 )) : (( var_1_32 )))) ) + ( var_1_21 )) ))))
   );
  } else {
                     var_1_35 = (
                      ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
   );
  }
 }
                   var_1_46 = (
  16
 );
                               if ( (! (var_1_22))) {
                                var_1_16 = (
   var_1_17
  );
 }
                   var_1_45 = (
  var_1_21
 );
 unsigned char stepLocal_0 = var_1_16;
                              if ( ((var_1_20) <= (stepLocal_0))) {
                               if ( (! ( ((var_1_13) && (var_1_22))))) {
                                var_1_1 = (
                                 ((
     var_1_6
    ) + (
                                  ((((( (( var_1_7 ) - ( var_1_8 )) )) > (( var_1_9 ))) ? (( (( var_1_7 ) - ( var_1_8 )) )) : (( var_1_9 ))))
    ))
   );
  } else {
                                var_1_1 = (
    var_1_7
   );
  }
 } else {
                               var_1_1 = (
   var_1_9
  );
 }
                  var_1_23 = (
                   ((
                    ((
    var_1_12
   ) > (
    8
   ))
  ) && (
                    ((
                     ((
     var_1_25
    ) || (
     var_1_26
    ))
   ) || (
    var_1_27
   ))
  ))
 );
                  if ( ((10) >= (var_1_18))) {
                   var_1_28 = (
                    ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
  );
 }
                              if ( ((var_1_16) != (var_1_20))) {
                               if (var_1_22) {
                                if ( (( ((var_1_7) + (var_1_1))) >= ( ((var_1_8) / (0.5f))))) {
                                 var_1_10 = (
     var_1_6
    );
   } else {
                                 var_1_10 = (
     var_1_8
    );
   }
  }
 }
                   if (var_1_27) {
                    if ( (! ( ((var_1_26) && (var_1_25))))) {
                     var_1_44 = (
                      ((((( var_1_21 )) > (( var_1_16 ))) ? (( var_1_21 )) : (( var_1_16 ))))
   );
  }
 }
 signed long int stepLocal_2 = (- ( ((var_1_16) % (var_1_19))));
 signed long int stepLocal_1 = (( ((var_1_12) * (var_1_20))) ^ ( ((8) & (var_1_11))));
                               if ( ((stepLocal_2) >= (var_1_12))) {
                                if ( ((stepLocal_1) <= ( ((128) / (-100))))) {
                                 var_1_18 = (
                                  ((
                                   ((
      var_1_19
     ) - (
      var_1_17
     ))
    ) + (
     var_1_16
    ))
   );
  }
 } else {
                                var_1_18 = (
   var_1_17
  );
 }
                   if (var_1_15) {
                    var_1_39 = (
                     ((
    -2
   ) + (
                      ((((( var_1_33 )) < (( var_1_32 ))) ? (( var_1_33 )) : (( var_1_32 ))))
   ))
  );
 } else {
                    if ( (! (var_1_22))) {
                     var_1_39 = (
    var_1_32
   );
  }
 }
                   if ( ((7.8f) <= (var_1_37))) {
                    var_1_40 = (
                     (((((( (( var_1_41 ) + ( var_1_42 )) ) - ( var_1_43 ))) < 0 ) ? -((( (( var_1_41 ) + ( var_1_42 )) ) - ( var_1_43 ))) : ((( (( var_1_41 ) + ( var_1_42 )) ) - ( var_1_43 )))))
  );
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 255);
 assume_abort_if_not(var_1_19 != 0);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -63);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( ((var_1_20) <= (var_1_16))) {
  if ( (! ( ((var_1_13) && (var_1_22))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_16) != (var_1_20))) {
  if (var_1_22) {
   if ( (( ((var_1_7) + (var_1_1))) >= ( ((var_1_8) / (0.5f))))) {
   } else {
   }
  }
 }
 if (var_1_22) {
 }
 if ( (! (var_1_22))) {
 }
 if ( (( (- ( ((var_1_16) % (var_1_19))))) >= (var_1_12))) {
  if ( (( (( ((var_1_12) * (var_1_20))) ^ ( ((8) & (var_1_11))))) <= ( ((128) / (-100))))) {
  }
 } else {
 }
 if ( ((var_1_14) || (var_1_15))) {
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
         var_1_20
        ) <= (
         var_1_16
        ))
       ) ? (
                                           ((
                                                 (! (
                                                  ((
           var_1_13
          ) && (
           var_1_22
          ))
         ))
        ) ? (
                                            ((
          var_1_1
         ) == (
                                             ((float) (
                                              ((
            var_1_6
           ) + (
                                               ((((( (( var_1_7 ) - ( var_1_8 )) )) > (( var_1_9 ))) ? (( (( var_1_7 ) - ( var_1_8 )) )) : (( var_1_9 ))))
           ))
          ))
         ))
        ) : (
                                            ((
          var_1_1
         ) == (
                                             ((float) (
           var_1_7
          ))
         ))
        ))
       ) : (
                                           ((
         var_1_1
        ) == (
                                            ((float) (
          var_1_9
         ))
        ))
       ))
      ) && (
                                          ((
                                                ((
         var_1_16
        ) != (
         var_1_20
        ))
       ) ? (
                                            ((
         var_1_22
        ) ? (
                                             ((
                                                   ((
                                                    ((
            var_1_7
           ) + (
            var_1_1
           ))
          ) >= (
                                                    ((
            var_1_8
           ) / (
            0.5f
           ))
          ))
         ) ? (
                                              ((
           var_1_10
          ) == (
                                               ((double) (
            var_1_6
           ))
          ))
         ) : (
                                              ((
           var_1_10
          ) == (
                                               ((double) (
            var_1_8
           ))
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
       var_1_11
      ) == (
                                                       ((signed short int) (
                                                        ((((( last_1_var_1_18 )) < (( ((((( last_1_var_1_20 )) > (( var_1_12 ))) ? (( last_1_var_1_20 )) : (( var_1_12 )))) ))) ? (( last_1_var_1_18 )) : (( ((((( last_1_var_1_20 )) > (( var_1_12 ))) ? (( last_1_var_1_20 )) : (( var_1_12 )))) ))))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_22
     ) ? (
                                           ((
       var_1_13
      ) == (
                                            ((unsigned char) (
                                             ((
         var_1_14
        ) && (
                                              (! (
          var_1_15
         ))
        ))
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                (! (
      var_1_22
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned char) (
       var_1_17
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                (- (
                                                 ((
       var_1_16
      ) % (
       var_1_19
      ))
     ))
    ) >= (
     var_1_12
    ))
   ) ? (
                                         ((
                                                ((
                                                 ((
                                                  ((
        var_1_12
       ) * (
        var_1_20
       ))
      ) ^ (
                                                  ((
        8
       ) & (
        var_1_11
       ))
      ))
     ) <= (
                                                 ((
       128
      ) / (
       -100
      ))
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((signed long int) (
                                            ((
                                             ((
         var_1_19
        ) - (
         var_1_17
        ))
       ) + (
        var_1_16
       ))
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
     var_1_18
    ) == (
                                          ((signed long int) (
      var_1_17
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_14
   ) || (
    var_1_15
   ))
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned short int) (
                                          ((
      var_1_21
     ) - (
                                           ((((( var_1_19 )) < (( var_1_17 ))) ? (( var_1_19 )) : (( var_1_17 ))))
     ))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_22
 ) == (
                                       ((unsigned char) (
   var_1_14
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
