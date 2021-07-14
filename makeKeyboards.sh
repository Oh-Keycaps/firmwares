cp -r -v keyboards/ ../../qmk/qmk_firmware/

pushd ../../qmk/qmk_firmware/
bin/qmk compile -kb handwired/dactyl_manuform/4x5 -km via
bin/qmk compile -kb handwired/dactyl_manuform/4x5 -km via12
bin/qmk compile -kb handwired/dactyl_manuform/4x6 -km via
bin/qmk compile -kb handwired/dactyl_manuform/4x6 -km via12
bin/qmk compile -kb handwired/dactyl_manuform/5x6 -km via
bin/qmk compile -kb handwired/dactyl_manuform/5x6 -km via12
bin/qmk compile -kb handwired/dactyl_manuform/6x6 -km via
bin/qmk compile -kb handwired/dactyl_manuform/6x6 -km via12
bin/qmk compile -kb handwired/dactyl_promicro -km via
bin/qmk compile -kb handwired/dactyl_promicro -km via12
popd

cp -v ../../qmk/qmk_firmware/handwired_dactyl_manuform_4x5*.hex ./keyboards/handwired/dactyl_manuform/4x5/
cp -v ../../qmk/qmk_firmware/handwired_dactyl_manuform_4x6*.hex ./keyboards/handwired/dactyl_manuform/4x6/
cp -v ../../qmk/qmk_firmware/handwired_dactyl_manuform_5x6*.hex ./keyboards/handwired/dactyl_manuform/5x6/
cp -v ../../qmk/qmk_firmware/handwired_dactyl_manuform_6x6*.hex ./keyboards/handwired/dactyl_manuform/6x6/
cp -v ../../qmk/qmk_firmware/handwired_dactyl_promicro*.hex ./keyboards/handwired/dactyl_promicro/

