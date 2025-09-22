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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 7.3;
unsigned short int var_1_2 = 256;
unsigned short int var_1_3 = 10;
double var_1_6 = 1.2;
float var_1_7 = 9999.5;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 100000;
unsigned char var_1_11 = 0;
double var_1_12 = 8.1;
float var_1_13 = 3.9;
unsigned char var_1_14 = 50;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 32;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 32;
signed long int var_1_22 = 8;
signed short int var_1_23 = 128;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 10000;
signed short int var_1_26 = 1;
signed short int var_1_27 = 256;
unsigned char var_1_28 = 0;
signed long int var_1_29 = 0;
float var_1_30 = 4.45;
float var_1_31 = 99999999.2;
float var_1_32 = 100000000.8;
float var_1_33 = 31.9;
float var_1_34 = 9.5;
float var_1_35 = 10000000000000.25;
float var_1_36 = 32.25;
float var_1_37 = 0.25;
float var_1_38 = 2.25;
signed short int var_1_39 = -4;
signed short int var_1_40 = -25;
signed short int var_1_41 = 8;
signed short int var_1_42 = 0;
signed short int var_1_43 = 16;
float var_1_44 = 9.1;
signed short int var_1_45 = 8;
unsigned short int var_1_46 = 5;
signed long int var_1_47 = 32;
double last_1_var_1_1 = 7.3;
float last_1_var_1_13 = 3.9;
void initially(void) {
}
void step(void) {
                                           if ( ((var_1_9) || (var_1_11))) {
                                            if ( ((var_1_6) == ( (( ((last_1_var_1_1) + (last_1_var_1_13))) + (var_1_12))))) {
                                             var_1_10 = (
    var_1_3
   );
  } else {
                                             var_1_10 = (
    var_1_2
   );
  }
 } else {
                                            var_1_10 = (
   var_1_2
  );
 }
                                if ( ((var_1_3) > (var_1_10))) {
                                 var_1_13 = (
   var_1_6
  );
 } else {
                                 var_1_13 = (
                                  ((((( ((((1.75f) < 0 ) ? -(1.75f) : (1.75f))) )) < (( var_1_6 ))) ? (( ((((1.75f) < 0 ) ? -(1.75f) : (1.75f))) )) : (( var_1_6 ))))
  );
 }
                                var_1_20 = (
  var_1_21
 );
                                var_1_22 = (
  1
 );
                                if (var_1_8) {
                                 if ( (( ((var_1_3) >= (var_1_2))) || ( ((var_1_10) < (var_1_22))))) {
                                  if ( (( (- (var_1_2))) < (var_1_3))) {
                                   if (var_1_9) {
                                    var_1_7 = (
      var_1_6
     );
    } else {
                                    var_1_7 = (
      64.4f
     );
    }
   } else {
                                   var_1_7 = (
     var_1_6
    );
   }
  }
 } else {
                                 var_1_7 = (
   var_1_6
  );
 }
                                if ( ((var_1_22) > (var_1_10))) {
                                 var_1_14 = (
                                  ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 ))))
  );
 } else {
                                 var_1_14 = (
                                  ((
    var_1_18
   ) - (
                                   ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))
   ))
  );
 }
 unsigned short int stepLocal_2 = var_1_2;
 signed long int stepLocal_1 = var_1_22;
 signed long int stepLocal_0 = ((200) / ( ((var_1_2) + (var_1_3))));
                               if ( ((stepLocal_0) < (var_1_22))) {
                                if ( ((stepLocal_2) <= (var_1_22))) {
                                 if ( ((stepLocal_1) != ( ((var_1_2) * ( ((var_1_3) + (var_1_10))))))) {
                                  var_1_1 = (
     25.25
    );
   } else {
                                  var_1_1 = (
     var_1_6
    );
   }
  }
 } else {
                                var_1_1 = (
   var_1_6
  );
 }
             if (var_1_24) {
             if ( ((var_1_25) > (16u))) {
              var_1_23 = (
               (((((( var_1_26 ) - ( var_1_27 ))) < 0 ) ? -((( var_1_26 ) - ( var_1_27 ))) : ((( var_1_26 ) - ( var_1_27 )))))
   );
  } else {
              if (var_1_28) {
               var_1_23 = (
     var_1_26
    );
   } else {
               var_1_23 = (
     var_1_27
    );
   }
  }
 }
             if (var_1_28) {
              if ( (( ((var_1_30) * ( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))))) >= ( (((((var_1_32)) < (( ((var_1_33) * (var_1_34))))) ? ((var_1_32)) : (( ((var_1_33) * (var_1_34))))))))) {
               var_1_29 = (
                ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
   );
  } else {
               var_1_29 = (
    var_1_27
   );
  }
 }
             if ( (( ((var_1_26) ^ (var_1_23))) >= (var_1_27))) {
              if (var_1_24) {
               var_1_35 = (
                ((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))
   );
  }
 }
             var_1_38 = (
  var_1_36
 );
             if (var_1_28) {
              var_1_39 = (
               ((
    var_1_40
   ) + (
                ((
     var_1_41
    ) - (
     var_1_42
    ))
   ))
  );
 }
             if ( ((var_1_38) <= ( (( (((((var_1_44)) > ((32.4f))) ? ((var_1_44)) : ((32.4f))))) + (var_1_30))))) {
              if ( ((var_1_31) > (var_1_37))) {
               var_1_43 = (
                ((((256) < 0 ) ? -(256) : (256)))
   );
  }
 } else {
              var_1_43 = (
               ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
  );
 }
             if ( ((var_1_46) <= ( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) {
              if ( (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) < ( (((((var_1_42)) > ((var_1_47))) ? ((var_1_42)) : ((var_1_47))))))) {
               var_1_45 = (
                ((
     var_1_42
    ) - (
     256
    ))
   );
  }
 } else {
              var_1_45 = (
   var_1_42
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 1);
 assume_abort_if_not(var_1_2 <= 32768);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 65534);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 4294967295);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 32766);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= -16383);
 assume_abort_if_not(var_1_40 <= 16383);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 16383);
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 16383);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 65535);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= -2147483648);
 assume_abort_if_not(var_1_47 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_13 = var_1_13;
}
int property(void) {
 if ( (( ((200) / ( ((var_1_2) + (var_1_3))))) < (var_1_22))) {
  if ( ((var_1_2) <= (var_1_22))) {
   if ( ((var_1_22) != ( ((var_1_2) * ( ((var_1_3) + (var_1_10))))))) {
   } else {
   }
  }
 } else {
 }
 if (var_1_8) {
  if ( (( ((var_1_3) >= (var_1_2))) || ( ((var_1_10) < (var_1_22))))) {
   if ( (( (- (var_1_2))) < (var_1_3))) {
    if (var_1_9) {
    } else {
    }
   } else {
   }
  }
 } else {
 }
 if ( ((var_1_9) || (var_1_11))) {
  if ( ((var_1_6) == ( (( ((last_1_var_1_1) + (last_1_var_1_13))) + (var_1_12))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_3) > (var_1_10))) {
 } else {
 }
 if ( ((var_1_22) > (var_1_10))) {
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
         200
        ) / (
                                                 ((
          var_1_2
         ) + (
          var_1_3
         ))
        ))
       ) < (
        var_1_22
       ))
      ) ? (
                                           ((
                                                 ((
         var_1_2
        ) <= (
         var_1_22
        ))
       ) ? (
                                            ((
                                                  ((
          var_1_22
         ) != (
                                                   ((
           var_1_2
          ) * (
                                                    ((
            var_1_3
           ) + (
            var_1_10
           ))
          ))
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((double) (
           25.25
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((double) (
           var_1_6
          ))
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
         var_1_6
        ))
       ))
      ))
     ) && (
                                           ((
       var_1_8
      ) ? (
                                            ((
                                                 ((
                                                  ((
          var_1_3
         ) >= (
          var_1_2
         ))
        ) || (
                                                  ((
          var_1_10
         ) < (
          var_1_22
         ))
        ))
       ) ? (
                                             ((
                                                    ((
                                                     (- (
           var_1_2
          ))
         ) < (
          var_1_3
         ))
        ) ? (
                                              ((
          var_1_9
         ) ? (
                                               ((
           var_1_7
          ) == (
                                                ((float) (
            var_1_6
           ))
          ))
         ) : (
                                               ((
           var_1_7
          ) == (
                                                ((float) (
            64.4f
           ))
          ))
         ))
        ) : (
                                              ((
          var_1_7
         ) == (
                                               ((float) (
           var_1_6
          ))
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                            ((
        var_1_7
       ) == (
                                             ((float) (
         var_1_6
        ))
       ))
      ))
     ))
    ) && (
                                                      ((
                                                            ((
       var_1_9
      ) || (
       var_1_11
      ))
     ) ? (
                                                      ((
                                                             ((
        var_1_6
       ) == (
                                                              ((
                                                               ((
          last_1_var_1_1
         ) + (
          last_1_var_1_13
         ))
        ) + (
         var_1_12
        ))
       ))
      ) ? (
                                                       ((
        var_1_10
       ) == (
                                                        ((unsigned long int) (
         var_1_3
        ))
       ))
      ) : (
                                                       ((
        var_1_10
       ) == (
                                                        ((unsigned long int) (
         var_1_2
        ))
       ))
      ))
     ) : (
                                                       ((
       var_1_10
      ) == (
                                                        ((unsigned long int) (
        var_1_2
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_3
     ) > (
      var_1_10
     ))
    ) ? (
                                          ((
      var_1_13
     ) == (
                                           ((float) (
       var_1_6
      ))
     ))
    ) : (
                                          ((
      var_1_13
     ) == (
                                           ((float) (
                                            ((((( ((((1.75f) < 0 ) ? -(1.75f) : (1.75f))) )) < (( var_1_6 ))) ? (( ((((1.75f) < 0 ) ? -(1.75f) : (1.75f))) )) : (( var_1_6 ))))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_22
    ) > (
     var_1_10
    ))
   ) ? (
                                         ((
     var_1_14
    ) == (
                                          ((unsigned char) (
                                           ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 ))))
     ))
    ))
   ) : (
                                         ((
     var_1_14
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_18
      ) - (
                                            ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_20
  ) == (
                                        ((unsigned short int) (
    var_1_21
   ))
  ))
 ))
) && (
                                      ((
  var_1_22
 ) == (
                                       ((signed long int) (
   1
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
