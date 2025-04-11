#Nogaï

#-----------------------------------------------------------------------------------------------

country = {
	tag = NOG
	ai = "SmallTrade1.txt"
	colonialattempts = 0
	colonialnation = no
	major = no
	colonists = 0
	cancelledloans = 0
	extendedloans = 0
	treasury = 150
	inflation = 0.000000
	merchants = 0.083333
	religion = { type = sunni }
	culture = { type = tatar }
	diplomacy = {
		relation = { tag = SIB value = 150 refusetrade = no }
		relation = { tag = CRI value = 150 refusetrade = no }
		relation = { tag = KZK value = 100 refusetrade = no }
		relation = { tag = UZB value = -50 refusetrade = no }
		relation = { tag = KHI value = -100 refusetrade = no }
		relation = { tag = AST value = -200 refusetrade = no }
	}
	knownprovinces = {
		446 447 451 452 453 454 455 456 457 458 459 466 467 468 510 511 512 513 514 515 516 517
		518 519 520 521 522 523 524 525 526 578 579 1527 1528 1531 1532 1533 1534 1535 1536 1571 1570 1573 1591 1592 1593 1594 1598 1599
		#Siberian corridor - South
		1572 580 582 584 585 587 589
		#Caspian sea area + Crimea
		463 464 465 469 470 471 472 473 487 529 530 1014 1016 1017 1575
	}
	ownedprovinces = {
		513 514 515 519 520
	}
	controlledprovinces = {
		456 513 514 515 519 520
	}
	nationalprovinces = {
		513 514 515 519 520
	}
	city = {
		fortress = { level = 1 }
		population = 3000
		location = 513
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 3500
		location = 514
		bailiff = yes
	}
	city = {
		name = "Saray-Jük"
		fortress = { level = 1 }
		population = 5000
		location = 515
		bailiff = yes
		capital = yes
	}
	city = {
		fortress = { level = 1 }
		population = 2500
		location = 519
		bailiff = yes
	}
	city = {
		fortress = { level = 1 }
		population = 3000
		location = 520
		bailiff = yes
	}
	landunit = {
		id = { type = 6001 id = 275 }
		name = "Nogaï Horde"
		location = 515
		infantry = 0
		cavalry = 15000
		artillery = 0
	}
	landunit = {
		id = { type = 6001 id = 276 }
		name = "Nogaï Raiders"
		location = 514
		infantry = 5000
		cavalry = 5000
		artillery = 0
	}
	technology = {
		stability = { level = 1 value = 50 }
		infra = { level = 1 value = 0 }
		trade = { level = 1 value = 20 }
		land = { level = 4 value = 50 }
		naval = { level = 1 value = 0 }
	}
}

#-----------------------------------------------------------------------------------------------
