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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 255.75;
double var_1_2 = 1.12;
double var_1_4 = 9.5;
float var_1_5 = 127.6;
float var_1_6 = 63.2;
signed char var_1_7 = -8;
signed short int var_1_8 = 5;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 16;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
float var_1_16 = 15.6;
unsigned long int var_1_17 = 0;
signed long int var_1_18 = -64;
unsigned long int var_1_19 = 1000;
signed long int var_1_20 = 16;
signed long int var_1_21 = 128;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 128;
double var_1_25 = 10000000000000.875;
double var_1_26 = 0.75;
double var_1_29 = 5.2;
unsigned long int var_1_30 = 0;
unsigned long int var_1_32 = 10;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
double var_1_35 = 3.75;
float var_1_36 = 31.25;
float var_1_37 = 4.25;
float var_1_38 = 32.5;
float var_1_39 = 200.5;
float var_1_40 = 5.5;
signed short int var_1_41 = 64;
signed short int var_1_42 = -16;
signed long int var_1_43 = -32;
unsigned long int var_1_44 = 0;
unsigned short int var_1_45 = 29114;
unsigned short int var_1_46 = 200;
unsigned long int var_1_47 = 500;
unsigned long int var_1_48 = 10;
signed long int var_1_49 = 1000;
void initially(void) {
}
void step(void) {
                  if ( ((var_1_22) < (var_1_24))) {
                   var_1_26 = (
                    ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))
  );
 }
                  if ( ((var_1_25) > ( ((var_1_29) + (var_1_25))))) {
                   var_1_30 = (
                    ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))
  );
 } else {
                   var_1_30 = (
                    ((((( (( var_1_24 ) + ( (( var_1_18 ) + ( var_1_32 )) )) )) > (( 1u ))) ? (( (( var_1_24 ) + ( (( var_1_18 ) + ( var_1_32 )) )) )) : (( 1u ))))
  );
 }
                  if ( ((var_1_29) <= ( (((((var_1_25)) > (( (- (var_1_25))))) ? ((var_1_25)) : (( (- (var_1_25))))))))) {
                   var_1_33 = (
   var_1_34
  );
 }
                  var_1_35 = (
  var_1_29
 );
                   if (var_1_10) {
                    var_1_36 = (
                     ((
                     ((((( var_1_37 )) < (( ((((( var_1_38 )) > (( var_1_39 ))) ? (( var_1_38 )) : (( var_1_39 )))) ))) ? (( var_1_37 )) : (( ((((( var_1_38 )) > (( var_1_39 ))) ? (( var_1_38 )) : (( var_1_39 )))) ))))
   ) - (
                      ((((( var_1_40 )) > (( 63.5f ))) ? (( var_1_40 )) : (( 63.5f ))))
   ))
  );
 } else {
                    var_1_36 = (
                     ((((( ((((( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) < (( var_1_40 ))) ? (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) : (( var_1_40 )))) )) < (( var_1_37 ))) ? (( ((((( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) < (( var_1_40 ))) ? (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) : (( var_1_40 )))) )) : (( var_1_37 ))))
  );
 }
                   if ( ((var_1_24) > (var_1_18))) {
                    var_1_41 = (
                     ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))
  );
 }
                   if ( ((var_1_25) > ( (- (var_1_39))))) {
                    var_1_43 = (
                     ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))
  );
 }
                   if ( ((var_1_24) > ( (( ((28414) + (var_1_45))) - (var_1_46))))) {
                    if ( ((var_1_18) >= ( (((((var_1_32)) > ((var_1_30))) ? ((var_1_32)) : ((var_1_30))))))) {
                     var_1_44 = (
                      ((((( var_1_32 )) < (( var_1_45 ))) ? (( var_1_32 )) : (( var_1_45 ))))
   );
  }
 } else {
                    var_1_44 = (
   var_1_32
  );
 }
                   var_1_47 = (
  var_1_48
 );
                   var_1_49 = (
  var_1_46
 );
                              var_1_7 = (
                               ((((-64) < 0 ) ? -(-64) : (-64)))
 );
                                var_1_22 = (
  var_1_23
 );
                                var_1_24 = (
  10
 );
                                var_1_25 = (
  var_1_6
 );
                              if ( ((var_1_25) < (32.8))) {
                               if ( ((var_1_25) == ( ((var_1_25) * ( (- (var_1_25))))))) {
                                var_1_1 = (
    var_1_5
   );
  } else {
                                var_1_1 = (
                                 ((
     var_1_6
    ) + (
     8.6f
    ))
   );
  }
 }
 signed long int stepLocal_0 = (((((4)) < ((var_1_22))) ? ((4)) : ((var_1_22))));
                              if ( ((var_1_24) <= (stepLocal_0))) {
                               var_1_8 = (
                                ((
    var_1_22
   ) + (
    10
   ))
  );
 } else {
                               var_1_8 = (
   var_1_24
  );
 }
 unsigned long int stepLocal_1 = 128u;
                               if ( ((stepLocal_1) > ( ((var_1_11) / (64u))))) {
                                if ( ((var_1_25) > (var_1_5))) {
                                 var_1_10 = (
                                  ((
     var_1_12
    ) || (
                                   ((
      var_1_13
     ) && (
      var_1_14
     ))
    ))
   );
  }
 } else {
                                var_1_10 = (
   var_1_15
  );
 }
 unsigned long int stepLocal_3 = var_1_17;
 signed short int stepLocal_2 = var_1_8;
                               if ( (( (~ (var_1_11))) >= (stepLocal_3))) {
                                if ( ((stepLocal_2) != (var_1_11))) {
                                 var_1_16 = (
                                  ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))
   );
  }
 }
 unsigned long int stepLocal_4 = var_1_11;
                                if ( ((var_1_4) < (var_1_2))) {
                                 if ( ((-0.5f) < (var_1_16))) {
                                  if ( ((var_1_16) == (var_1_2))) {
                                   if ( ((stepLocal_4) < (var_1_19))) {
                                    var_1_18 = (
                                     ((((( (( var_1_8 ) + ( var_1_24 )) )) < (( var_1_7 ))) ? (( (( var_1_8 ) + ( var_1_24 )) )) : (( var_1_7 ))))
     );
    } else {
                                    var_1_18 = (
                                     ((
       var_1_20
      ) - (
       var_1_21
      ))
     );
    }
   }
  } else {
                                  var_1_18 = (
    var_1_24
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65534);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1073741823);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= -32766);
 assume_abort_if_not(var_1_42 <= 32766);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 16384);
 assume_abort_if_not(var_1_45 <= 32767);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 32767);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_25) < (32.8))) {
  if ( ((var_1_25) == ( ((var_1_25) * ( (- (var_1_25))))))) {
  } else {
  }
 }
 if ( ((var_1_24) <= ( (((((4)) < ((var_1_22))) ? ((4)) : ((var_1_22))))))) {
 } else {
 }
 if ( ((128u) > ( ((var_1_11) / (64u))))) {
  if ( ((var_1_25) > (var_1_5))) {
  }
 } else {
 }
 if ( (( (~ (var_1_11))) >= (var_1_17))) {
  if ( ((var_1_8) != (var_1_11))) {
  }
 }
 if ( ((var_1_4) < (var_1_2))) {
  if ( ((-0.5f) < (var_1_16))) {
   if ( ((var_1_16) == (var_1_2))) {
    if ( ((var_1_11) < (var_1_19))) {
    } else {
    }
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
                  ((
                   ((
                                            ((
                                                ((
          var_1_25
         ) < (
          32.8
         ))
        ) ? (
                                             ((
                                                   ((
           var_1_25
          ) == (
                                                    ((
            var_1_25
           ) * (
                                                     (- (
             var_1_25
            ))
           ))
          ))
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((float) (
            var_1_5
           ))
          ))
         ) : (
                                              ((
           var_1_1
          ) == (
                                               ((float) (
                                                ((
             var_1_6
            ) + (
             8.6f
            ))
           ))
          ))
         ))
        ) : (
         1
        ))
       ) && (
                                            ((
         var_1_7
        ) == (
                                             ((signed char) (
                                              ((((-64) < 0 ) ? -(-64) : (-64)))
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
         var_1_24
        ) <= (
                                                  ((((( 4 )) < (( var_1_22 ))) ? (( 4 )) : (( var_1_22 ))))
        ))
       ) ? (
                                            ((
         var_1_8
        ) == (
                                             ((signed short int) (
                                              ((
           var_1_22
          ) + (
           10
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_8
        ) == (
                                             ((signed short int) (
          var_1_24
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
        128u
       ) > (
                                                   ((
         var_1_11
        ) / (
         64u
        ))
       ))
      ) ? (
                                            ((
                                                   ((
         var_1_25
        ) > (
         var_1_5
        ))
       ) ? (
                                             ((
         var_1_10
        ) == (
                                              ((unsigned char) (
                                               ((
           var_1_12
          ) || (
                                                ((
            var_1_13
           ) && (
            var_1_14
           ))
          ))
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                            ((
        var_1_10
       ) == (
                                             ((unsigned char) (
         var_1_15
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
                                                  (~ (
        var_1_11
       ))
      ) >= (
       var_1_17
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_8
       ) != (
        var_1_11
       ))
      ) ? (
                                            ((
        var_1_16
       ) == (
                                             ((float) (
                                              ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))
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
      var_1_4
     ) < (
      var_1_2
     ))
    ) ? (
                                          ((
                                                 ((
       -0.5f
      ) < (
       var_1_16
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_16
       ) == (
        var_1_2
       ))
      ) ? (
                                            ((
                                                   ((
         var_1_11
        ) < (
         var_1_19
        ))
       ) ? (
                                             ((
         var_1_18
        ) == (
                                              ((signed long int) (
                                               ((((( (( var_1_8 ) + ( var_1_24 )) )) < (( var_1_7 ))) ? (( (( var_1_8 ) + ( var_1_24 )) )) : (( var_1_7 ))))
         ))
        ))
       ) : (
                                             ((
         var_1_18
        ) == (
                                              ((signed long int) (
                                               ((
           var_1_20
          ) - (
           var_1_21
          ))
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
        var_1_24
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
                                         ((unsigned short int) (
     var_1_23
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_24
  ) == (
                                        ((unsigned short int) (
    10
   ))
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((double) (
   var_1_6
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
