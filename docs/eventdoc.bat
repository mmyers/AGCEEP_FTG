@rem This batch file will recreate all event doc files from scratch, assuming it is placed in the Mods\AGCEEP_FTG\docs folder.
java -jar eventdoc-tool/FTG_Event_Doc.jar -o "." -b "..\..\.." -m "AGCEEP_FTG" -n "AGCEEP" -f "Db\events.txt" -f "Scenarios\Inc\Reformation_Events.inc" -e "Events\RNGC\RNGC_Shiite_Persia.eue" -e "scenarios\Fantasy\Fantasy_Byzantium\events\Fantasy_Byzantium.txt" -e "scenarios\Fantasy\Fantasy_Granada\events\Fantasy_Granada.txt" -t "AGCEEP Event Documentation: %%s" --image-dir "images/eventdoc" --css-dir "scripts/eventdoc" --js-dir "scripts/eventdoc" 1>AGCEEP_output.txt 2>&1
pause