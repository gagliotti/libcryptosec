#include <libcryptosec/ec/BrainpoolCurveFactory.h>

BrainpoolCurveFactory::BrainpoolCurveFactory() {
//Nothing to do. This constructor is never called.
}

const EllipticCurve* BrainpoolCurveFactory::getCurve(
		BrainpoolCurveFactory::CurveName curveName) throw (BigIntegerException) {

	switch (curveName) {
	case BP160r1:
		return bp160r1();
		break;
	case BP160t1:
		return bp160t1();
		break;
	case BP192r1:
		return bp192r1();
		break;
	case BP192t1:
		return bp192t1();
		break;
	case BP224r1:
		return bp224r1();
		break;
	case BP224t1:
		return bp224t1();
		break;
	case BP256r1:
		return bp256r1();
		break;
	case BP256t1:
		return bp256t1();
		break;
	case BP320r1:
		return bp320r1();
		break;
	case BP320t1:
		return bp320t1();
		break;
	case BP384r1:
		return bp384r1();
		break;
	case BP384t1:
		return bp384t1();
		break;
	case BP512r1:
		return bp512r1();
		break;
	case BP512t1:
		return bp512t1();
		break;
	default:
		//TODO throw EC exception curve not implemented or not specified
		return NULL;
		break;

		return 0;
	}
}

const EllipticCurve* BrainpoolCurveFactory::bp160r1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("340E7BE2A280EB74E2BE61BADA745D97E8F7C300");

	curve->b = new BigInteger();
	curve->b->setHexValue("1E589A8595423412134FAA2DBDEC95C8D8675E58");

	curve->p = new BigInteger();
	curve->p->setHexValue("E95E4A5F737059DC60DFC7AD95B3D8139515620F");

	curve->x = new BigInteger();
	curve->x->setHexValue("BED5AF16EA3F6A4F62938C4631EB5AF7BDBCDBC3");

	curve->y = new BigInteger();
	curve->y->setHexValue("1667CB477A1A8EC338F94741669C976316DA6321");

	curve->order = new BigInteger();
	curve->order->setHexValue("E95E4A5F737059DC60DF5991D45029409E60FC09");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp160t1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("E95E4A5F737059DC60DFC7AD95B3D8139515620C");

	curve->b = new BigInteger();
	curve->b->setHexValue("7A556B6DAE535B7B51ED2C4D7DAA7A0B5C55F380");

	curve->p = new BigInteger();
	curve->p->setHexValue("E95E4A5F737059DC60DFC7AD95B3D8139515620F");

	curve->x = new BigInteger();
	curve->x->setHexValue("B199B13B9B34EFC1397E64BAEB05ACC265FF2378");

	curve->y = new BigInteger();
	curve->y->setHexValue("ADD6718B7C7C1961F0991B842443772152C9E0AD");

	curve->order = new BigInteger();
	curve->order->setHexValue("E95E4A5F737059DC60DF5991D45029409E60FC09");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp192r1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("6A91174076B1E0E19C39C031FE8685C1CAE040E5C69A28EF");

	curve->b = new BigInteger();
	curve->b->setHexValue("469A28EF7C28CCA3DC721D044F4496BCCA7EF4146FBF25C9");

	curve->p = new BigInteger();
	curve->p->setHexValue("C302F41D932A36CDA7A3463093D18DB78FCE476DE1A86297");

	curve->x = new BigInteger();
	curve->x->setHexValue("C0A0647EAAB6A48753B033C56CB0F0900A2F5C4853375FD6");

	curve->y = new BigInteger();
	curve->y->setHexValue("14B690866ABD5BB88B5F4828C1490002E6773FA2FA299B8F");

	curve->order = new BigInteger();
	curve->order->setHexValue("C302F41D932A36CDA7A3462F9E9E916B5BE8F1029AC4ACC1");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp192t1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("C302F41D932A36CDA7A3463093D18DB78FCE476DE1A86294");

	curve->b = new BigInteger();
	curve->b->setHexValue("13D56FFAEC78681E68F9DEB43B35BEC2FB68542E27897B79");

	curve->p = new BigInteger();
	curve->p->setHexValue("C302F41D932A36CDA7A3463093D18DB78FCE476DE1A86297");

	curve->x = new BigInteger();
	curve->x->setHexValue("3AE9E58C82F63C30282E1FE7BBF43FA72C446AF6F4618129");

	curve->y = new BigInteger();
	curve->y->setHexValue("097E2C5667C2223A902AB5CA449D0084B7E5B3DE7CCC01C9");

	curve->order = new BigInteger();
	curve->order->setHexValue("C302F41D932A36CDA7A3462F9E9E916B5BE8F1029AC4ACC1");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp224r1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("68A5E62CA9CE6C1C299803A6C1530B514E182AD8B0042A59CAD29F43");

	curve->b = new BigInteger();
	curve->b->setHexValue("2580F63CCFE44138870713B1A92369E33E2135D266DBB372386C400B");

	curve->p = new BigInteger();
	curve->p->setHexValue("D7C134AA264366862A18302575D1D787B09F075797DA89F57EC8C0FF");

	curve->x = new BigInteger();
	curve->x->setHexValue("0D9029AD2C7E5CF4340823B2A87DC68C9E4CE3174C1E6EFDEE12C07D");

	curve->y = new BigInteger();
	curve->y->setHexValue("58AA56F772C0726F24C6B89E4ECDAC24354B9E99CAA3F6D3761402CD");

	curve->order = new BigInteger();
	curve->order->setHexValue("D7C134AA264366862A18302575D0FB98D116BC4B6DDEBCA3A5A7939F");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp224t1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("D7C134AA264366862A18302575D1D787B09F075797DA89F57EC8C0FC");

	curve->b = new BigInteger();
	curve->b->setHexValue("4B337D934104CD7BEF271BF60CED1ED20DA14C08B3BB64F18A60888D");

	curve->p = new BigInteger();
	curve->p->setHexValue("D7C134AA264366862A18302575D1D787B09F075797DA89F57EC8C0FF");

	curve->x = new BigInteger();
	curve->x->setHexValue("6AB1E344CE25FF3896424E7FFE14762ECB49F8928AC0C76029B4D580");

	curve->y = new BigInteger();
	curve->y->setHexValue("0374E9F5143E568CD23F3F4D7C0D4B1E41C8CC0D1C6ABD5F1A46DB4C");

	curve->order = new BigInteger();
	curve->order->setHexValue("D7C134AA264366862A18302575D0FB98D116BC4B6DDEBCA3A5A7939F");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp256r1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("7D5A0975FC2C3057EEF67530417AFFE7FB8055C126DC5C6CE94A4B44F330B5D9");

	curve->b = new BigInteger();
	curve->b->setHexValue("26DC5C6CE94A4B44F330B5D9BBD77CBF958416295CF7E1CE6BCCDC18FF8C07B6");

	curve->p = new BigInteger();
	curve->p->setHexValue("A9FB57DBA1EEA9BC3E660A909D838D726E3BF623D52620282013481D1F6E5377");

	curve->x = new BigInteger();
	curve->x->setHexValue("8BD2AEB9CB7E57CB2C4B482FFC81B7AFB9DE27E1E3BD23C23A4453BD9ACE3262");

	curve->y = new BigInteger();
	curve->y->setHexValue("547EF835C3DAC4FD97F8461A14611DC9C27745132DED8E545C1D54C72F046997");

	curve->order = new BigInteger();
	curve->order->setHexValue("A9FB57DBA1EEA9BC3E660A909D838D718C397AA3B561A6F7901E0E82974856A7");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp256t1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("A9FB57DBA1EEA9BC3E660A909D838D726E3BF623D52620"
						  "282013481D1F6E5374");

	curve->b = new BigInteger();
	curve->b->setHexValue("662C61C430D84EA4FE66A7733D0B76B7BF93EBC4AF2F49"
						  "256AE58101FEE92B04");

	curve->p = new BigInteger();
	curve->p->setHexValue("A9FB57DBA1EEA9BC3E660A909D838D726E3BF623D52620"
						  "282013481D1F6E5377");

	curve->x = new BigInteger();
	curve->x->setHexValue("A3E8EB3CC1CFE7B7732213B23A656149AFA142C47AAFBC"
						  "2B79A191562E1305F4");

	curve->y = new BigInteger();
	curve->y->setHexValue("2D996C823439C56D7F7B22E14644417E69BCB6DE39D027"
						  "001DABE8F35B25C9BE");

	curve->order = new BigInteger();
	curve->order->setHexValue("A9FB57DBA1EEA9BC3E660A909D838D718C397AA3B5"
							  "61A6F7901E0E82974856A7");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp320r1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("3EE30B568FBAB0F883CCEBD46D3F3BB8A2A73513F5EB79"
						  "DA66190EB085FFA9F492F375A97D860EB4");

	curve->b = new BigInteger();
	curve->b->setHexValue("520883949DFDBC42D3AD198640688A6FE13F41349554B4"
						  "9ACC31DCCD884539816F5EB4AC8FB1F1A6");

	curve->p = new BigInteger();
	curve->p->setHexValue("D35E472036BC4FB7E13C785ED201E065F98FCFA6F6F40D"
						  "EF4F92B9EC7893EC28FCD412B1F1B32E27");

	curve->x = new BigInteger();
	curve->x->setHexValue("43BD7E9AFB53D8B85289BCC48EE5BFE6F20137D10A087E"
						  "B6E7871E2A10A599C710AF8D0D39E20611");

	curve->y = new BigInteger();
	curve->y->setHexValue("14FDD05545EC1CC8AB4093247F77275E0743FFED117182"
						  "EAA9C77877AAAC6AC7D35245D1692E8EE1");

	curve->order = new BigInteger();
	curve->order->setHexValue("D35E472036BC4FB7E13C785ED201E065F98FCFA5B6"
							  "8F12A32D482EC7EE8658E98691555B44C59311");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp320t1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("D35E472036BC4FB7E13C785ED201E065F98FCFA6F6F40D"
						  "EF4F92B9EC7893EC28FCD412B1F1B32E24");

	curve->b = new BigInteger();
	curve->b->setHexValue("A7F561E038EB1ED560B3D147DB782013064C19F27ED27C"
						  "6780AAF77FB8A547CEB5B4FEF422340353");

	curve->p = new BigInteger();
	curve->p->setHexValue("D35E472036BC4FB7E13C785ED201E065F98FCFA6F6F40D"
						  "EF4F92B9EC7893EC28FCD412B1F1B32E27");

	curve->x = new BigInteger();
	curve->x->setHexValue("925BE9FB01AFC6FB4D3E7D4990010F813408AB106C4F09"
						  "CB7EE07868CC136FFF3357F624A21BED52");

	curve->y = new BigInteger();
	curve->y->setHexValue("63BA3A7A27483EBF6671DBEF7ABB30EBEE084E58A0B077"
						  "AD42A5A0989D1EE71B1B9BC0455FB0D2C3");

	curve->order = new BigInteger();
	curve->order->setHexValue("D35E472036BC4FB7E13C785ED201E065F98FCFA5B6"
							  "8F12A32D482EC7EE8658E98691555B44C59311");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp384r1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("7BC382C63D8C150C3C72080ACE05AFA0C2BEA28E4FB22787"
						  "139165EFBA91F90F8AA5814A503AD4EB04A8C7DD22CE2826");

	curve->b = new BigInteger();
	curve->b->setHexValue("04A8C7DD22CE28268B39B55416F0447C2FB77DE107DCD2A6"
						  "2E880EA53EEB62D57CB4390295DBC9943AB78696FA504C11");

	curve->p = new BigInteger();
	curve->p->setHexValue("8CB91E82A3386D280F5D6F7E50E641DF152F7109ED5456B4"
						  "12B1DA197FB71123ACD3A729901D1A71874700133107EC53");

	curve->x = new BigInteger();
	curve->x->setHexValue("1D1C64F068CF45FFA2A63A81B7C13F6B8847A3E77EF14FE3"
						  "DB7FCAFE0CBD10E8E826E03436D646AAEF87B2E247D4AF1E");

	curve->y = new BigInteger();
	curve->y->setHexValue("8ABE1D7520F9C2A45CB1EB8E95CFD55262B70B29FEEC5864"
						  "E19C054FF99129280E4646217791811142820341263C5315");

	curve->order = new BigInteger();
	curve->order->setHexValue("8CB91E82A3386D280F5D6F7E50E641DF152F7109ED5456B3"
							  "1F166E6CAC0425A7CF3AB6AF6B7FC3103B883202E9046565");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp384t1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("8CB91E82A3386D280F5D6F7E50E641DF152F7109ED5456B4"
						  "12B1DA197FB71123ACD3A729901D1A71874700133107EC50");

	curve->b = new BigInteger();
	curve->b->setHexValue("7F519EADA7BDA81BD826DBA647910F8C4B9346ED8CCDC64E"
						  "4B1ABD11756DCE1D2074AA263B88805CED70355A33B471EE");

	curve->p = new BigInteger();
	curve->p->setHexValue("8CB91E82A3386D280F5D6F7E50E641DF152F7109ED5456B4"
						  "12B1DA197FB71123ACD3A729901D1A71874700133107EC53");

	curve->x = new BigInteger();
	curve->x->setHexValue("18DE98B02DB9A306F2AFCD7235F72A819B80AB12EBD65317"
						  "2476FECD462AABFFC4FF191B946A5F54D8D0AA2F418808CC");

	curve->y = new BigInteger();
	curve->y->setHexValue("25AB056962D30651A114AFD2755AD336747F93475B7A1FCA"
						  "3B88F2B6A208CCFE469408584DC2B2912675BF5B9E582928");

	curve->order = new BigInteger();
	curve->order->setHexValue("8CB91E82A3386D280F5D6F7E50E641DF152F7109ED5456B3"
							  "1F166E6CAC0425A7CF3AB6AF6B7FC3103B883202E9046565");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp512r1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("7830A3318B603B89E2327145AC234CC594CBDD8D3DF"
						  "91610A83441CAEA9863BC2DED5D5AA8253AA10A2EF1"
						  "C98B9AC8B57F1117A72BF2C7B9E7C1AC4D77FC94CA");

	curve->b = new BigInteger();
	curve->b->setHexValue("3DF91610A83441CAEA9863BC2DED5D5AA8253AA10A2"
						  "EF1C98B9AC8B57F1117A72BF2C7B9E7C1AC4D77FC94"
						  "CADC083E67984050B75EBAE5DD2809BD638016F723");

	curve->p = new BigInteger();
	curve->p->setHexValue("AADD9DB8DBE9C48B3FD4E6AE33C9FC07CB308DB3B3C"
						  "9D20ED6639CCA703308717D4D9B009BC66842AECDA1"
						  "2AE6A380E62881FF2F2D82C68528AA6056583A48F3");

	curve->x = new BigInteger();
	curve->x->setHexValue("81AEE4BDD82ED9645A21322E9C4C6A9385ED9F70B5D"
						  "916C1B43B62EEF4D0098EFF3B1F78E2D0D48D50D168"
						  "7B93B97D5F7C6D5047406A5E688B352209BCB9F822");

	curve->y = new BigInteger();
	curve->y->setHexValue("7DDE385D566332ECC0EABFA9CF7822FDF209F70024A"
						  "57B1AA000C55B881F8111B2DCDE494A5F485E5BCA4B"
						  "D88A2763AED1CA2B2FA8F0540678CD1E0F3AD80892");

	curve->order = new BigInteger();
	curve->order->setHexValue("AADD9DB8DBE9C48B3FD4E6AE33C9FC07CB308DB3B3C"
							  "9D20ED6639CCA70330870553E5C414CA92619418661"
							  "197FAC10471DB1D381085DDADDB58796829CA90069");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}

const EllipticCurve* BrainpoolCurveFactory::bp512t1() throw (BigIntegerException) {
	EllipticCurve * curve = new EllipticCurve();

	curve->a = new BigInteger();
	curve->a->setHexValue("AADD9DB8DBE9C48B3FD4E6AE33C9FC07CB308DB3B3C"
						  "9D20ED6639CCA703308717D4D9B009BC66842AECDA1"
						  "2AE6A380E62881FF2F2D82C68528AA6056583A48F0");

	curve->b = new BigInteger();
	curve->b->setHexValue("7CBBBCF9441CFAB76E1890E46884EAE321F70C0BCB4"
						  "981527897504BEC3E36A62BCDFA2304976540F64500"
						  "85F2DAE145C22553B465763689180EA2571867423E");

	curve->p = new BigInteger();
	curve->p->setHexValue("AADD9DB8DBE9C48B3FD4E6AE33C9FC07CB308DB3B3C"
						  "9D20ED6639CCA703308717D4D9B009BC66842AECDA1"
						  "2AE6A380E62881FF2F2D82C68528AA6056583A48F3");

	curve->x = new BigInteger();
	curve->x->setHexValue("640ECE5C12788717B9C1BA06CBC2A6FEBA85842458C"
						  "56DDE9DB1758D39C0313D82BA51735CDB3EA499AA77"
						  "A7D6943A64F7A3F25FE26F06B51BAA2696FA9035DA");

	curve->y = new BigInteger();
	curve->y->setHexValue("5B534BD595F5AF0FA2C892376C84ACE1BB4E3019B71"
						  "634C01131159CAE03CEE9D9932184BEEF216BD71DF2"
						  "DADF86A627306ECFF96DBB8BACE198B61E00F8B332");

	curve->order = new BigInteger();
	curve->order->setHexValue("AADD9DB8DBE9C48B3FD4E6AE33C9FC07CB308DB3B3C"
							  "9D20ED6639CCA70330870553E5C414CA92619418661"
							  "197FAC10471DB1D381085DDADDB58796829CA90069");

	curve->cofactor = new BigInteger();
	curve->cofactor->setHexValue("1");
	return curve;
}