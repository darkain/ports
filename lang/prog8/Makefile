PORTNAME=	prog8c
DISTVERSION=	12.3.2
CATEGORIES=	lang java
MASTER_SITES=	https://github.com/irmen/prog8/releases/download/v${DISTVERSION}/
EXTRACT_SUFX=	-all.jar
EXTRACT_ONLY=

MAINTAINER=	ports@darkain.com
COMMENT=	Structured programming language compiler
WWW=		https://github.com/irmen/prog8

LICENSE=	GPLv3+

USES=		java:run

NO_ARCH=	yes
NO_BUILD=	yes

SUB_FILES=	prog8c.sh

PLIST_FILES=	bin/${PORTNAME} \
		${JAVAJARDIR}/prog8c-${DISTVERSION}${EXTRACT_SUFX}

do-install:
	${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${DISTDIR}/${DISTFILES} \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME}.sh \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
