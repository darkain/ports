PORTNAME=		prog8c
DISTVERSION=	12.3.3
CATEGORIES=		lang java
MASTER_SITES=	https://github.com/irmen/prog8/releases/download/v${DISTVERSION}/
EXTRACT_SUFX=	-all.jar
EXTRACT_ONLY=

MAINTAINER=		ports@darkain.com
COMMENT=		Structured programming language compiler
WWW=			https://github.com/irmen/prog8

LICENSE=		GPLv3+

RUN_DEPENDS=	64tass:devel/tass64

USES=			java:run

NO_ARCH=		yes
NO_BUILD=		yes

SUB_FILES=		${PORTNAME}.sh
SUB_LIST=		DISTFILES=${DISTFILES}

PLIST_FILES=	bin/${PORTNAME} ${JAVAJARDIR}/${DISTFILES}

do-install:
	${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${DISTDIR}/${DISTFILES} \
		${STAGEDIR}${JAVAJARDIR}/${DISTFILES}
	${INSTALL_SCRIPT} ${WRKDIR}/${SUB_FILES} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
